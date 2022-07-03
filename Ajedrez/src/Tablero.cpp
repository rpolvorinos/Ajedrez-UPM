#include "Tablero.h"
#include "freeglut.h"
#include "ETSIDI.h"


void Tablero::dibuja() {

	//Representacion del punto de vista de la camara

	gluLookAt(x_ojo, y_ojo, z_ojo,  // posicion del ojo
		0.0, 0.0, 0.0,    // hacia que punto mira  (0,0,0) 
		0.0, 0.0, 1.0);      // definimos hacia arriba (eje Z)    


//Dibujo del tablero

	//Dibujo de la informacion de que jugador esta jugando en cada turno
	ETSIDI::setTextColor(255, 0, 0);
	ETSIDI::setFont("fuentes/Bitwise.ttf", 24);

	if (turno == 0)
		ETSIDI::printxy("Turno de Padre de Familia", -5.5, 6);
	if (turno == 1)
		ETSIDI::printxy("Turno de Los Simpsons", -5.5, 6);

	//Representacion del tablero

	glClear(GL_COLOR_BUFFER_BIT);
	

	for (int fila = 1; fila <= 8; fila++) {
		for (int columna = 1; columna <= 8; columna++) {
			posicion.setX(fila * 1.5 - 6);
			posicion.setY(columna * 1.5 - 7.5);
			
			if (fila == selector.getFila() && columna == selector.getColumna()) {

			casillas[fila - 1][columna - 1].setColor(0,255,0);
			
			}
			else
			{
				if ((fila + columna) & 1)
				{
					casillas[fila - 1][columna - 1].setColor(255, 255, 255);
					casillas[fila - 1][columna - 1].setCasillas(fila, columna);
				}

				else
				{
					casillas[fila - 1][columna - 1].setColor(255, 0, 0);
					casillas[fila - 1][columna - 1].setCasillas(fila, columna);
				}
			}
				
			casillas[fila-1][columna-1].cuadrado(posicion.getX(), posicion.getY(), 1.5);
			posf[fila - 1] = posicion.getX();
			posc[columna - 1] = posicion.getY();

		}
	}
	 
	 //Dibujo del contorno del tablero
	 glLineWidth(4);
	 glBegin(GL_LINES);
	 glColor3f(128, 64, 0);
	 glVertex2f(-5.3, -6.8);
	 glVertex2f(6.75, -6.8),
	 glVertex2f(6.75, -6.8);
	 glVertex2f(6.75, 5.3);
	 glVertex2f(6.75, 5.3);
	 glVertex2f(-5.3, 5.3);
	 glVertex2f(-5.3, 5.3);
	 glVertex2f(-5.3, -6.8);
	 glEnd();
	 
	 //Dibujo de las piezas en el tablero
	 piezas.dibuja();
}

void Tablero::inicializa()
{
	x_ojo = 0.0;
	y_ojo = -0.01;
	z_ojo = 23;

	turno = 0;

	//Inicializacion del selector

	selector.inicializa();

	//Inicializacion de las diferentes piezas

	for (float i = 1; i < 9; i = i + 7) //Inicialización torres blancas
	{
		Torre* aux = new Torre(i, 1, 0);
		piezas.agregar(aux);
	}
	for (float i = 1; i < 9; i = i + 7) //Inicialización torres negras
	{
		Torre* aux = new Torre(i, 8, 1);
		piezas.agregar(aux);
	}

	for (float i = 3; i < 7; i = i + 3) //Inicialización alfiles blancos
	{
		Alfil* aux = new Alfil(i, 1, 0);
		piezas.agregar(aux);
	}

	for (float i = 3; i < 7; i = i + 3) //Inicialización alfiles negros
	{
		Alfil* aux = new Alfil(i, 8, 1);
		piezas.agregar(aux);
	}

	for (float i = 2; i < 8; i = i + 5)
	{
		Caballo* aux = new Caballo(i, 1, 0); //Inicialización caballos blancos
		piezas.agregar(aux);
	}

	for (float i = 2; i < 8; i = i + 5) //Inicialización caballos negros
	{
		Caballo* aux = new Caballo(i, 8, 1);
		piezas.agregar(aux);
	}

	for (float i = 1; i < 9; i = i++) //Inicialización peones blancos
	{
		Peon* aux = new Peon(i, 2, 0);
		piezas.agregar(aux);
	}

	for (float i = 1; i < 9; i++) //Inicialización peones negros
	{
		Peon* aux = new Peon(i, 7, 1);
		piezas.agregar(aux);
	}

	//Inicializacion de los reyes
	Rey* r_aux = new Rey(4, 1, 0);
	piezas.agregar(r_aux);		
	Rey* r_aux1 = new Rey(4, 8, 1);
	piezas.agregar(r_aux1);		

	//Inicializacion de las damas
	Dama* d_aux = new Dama(5, 1, 0);
	piezas.agregar(d_aux);
	Dama* d_aux1 = new Dama(5, 8, 1);
	piezas.agregar(d_aux1);



	//Inicializacion de la ocupacion de las piezas

	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			if (j == 0 || j == 1)
				ocupacion[i][j] = 0;
			else
			{
				if (j == 6 || j == 7)
					ocupacion[i][j] = 1;
				else
					ocupacion[i][j] = 2;
			}

		}
	}
}

void Tablero::tecla(unsigned char key)
{
	selector.mover(key);

	switch (key)
	{
	case ' ':
		piezas.mover(selector, turno, ocupacion[selector.getFila() - 1][selector.getColumna() - 1], piezas);
		break;
	}
}

int Tablero::jaqueMate() {

	int n_reyes = 0;
	Pieza auxiliar;
	for (int i = 0; i < piezas.getNumero_Piezas();i++) {
		if (piezas.lista[i]->getTipoPieza() == 5) {
			n_reyes++;
			auxiliar = *piezas.lista[i];
		}

	}
	if (n_reyes == 2)
		return 0;
	else
		if (auxiliar.getColor() == 0)
			return 1; //Ganan las blancas
		else
			return 2; //Ganan las negras
}