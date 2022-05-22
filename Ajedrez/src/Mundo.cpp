#include "Mundo.h"
#include "freeglut.h"
#include <math.h>
#include "ETSIDI.h"
#include "Interaccion.h"

void Mundo::rotarOjo()
{
	/*float dist = sqrt(x_ojo * x_ojo + y_ojo * y_ojo);
	float ang = atan2(y_ojo, x_ojo);
	ang -= 90.0f;
	x_ojo = dist * cos(ang);
	y_ojo = dist * sin(ang);
	*/

	glRotatef(y_ojo, 0, 1, 0);

}

void Mundo::dibuja()
{
	gluLookAt(x_ojo, y_ojo, z_ojo,  // posicion del ojo
		0.0,0.0,0.0,    // hacia que punto mira  (0,0,0) 
		0.0, 0.0, 1.0);      // definimos hacia arriba (eje Z)    

//aqui es donde hay que poner el codigo de dibujo
// 
//Dibujo del tablero
	
	tablero.dibuja(); //se dibuja el tablero
	piezas.dibuja();
}

void Mundo::mueve()
{
	
}

void Mundo::inicializa()
{
	x_ojo = 0.0;
	y_ojo = -0.01;
	z_ojo = 23;

	turno = 0;

	tablero.selector.inicializa();

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


	//datos de incializacion de los caballos
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

	//datos de incializacion de los peones
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

	//datos de incializacion de los reyes

		Rey* r_aux = new Rey(4, 1, 0);
	piezas.agregar(r_aux);
		Rey* r_aux1 = new Rey(4, 8, 1);
		piezas.agregar(r_aux1);

	//datos de inicializacion de las damas
		Dama* d_aux = new Dama(5, 1, 0);
		piezas.agregar(d_aux);
		Dama* d_aux1 = new Dama(5, 8, 1);
		piezas.agregar(d_aux1);




	for (int i = 0;i < 8;i++)
	{
		for (int j = 0;j < 8;j++)
		{
			if (j == 0 || j==1)
				ocupacion[i][j]=0;
			else
			{
				if (j==6 || j == 7)
					ocupacion[i][j] =1;
				else
					ocupacion[i][j] =2;
			}
			
		}
	}
}

void Mundo::tecla(unsigned char key)
{
	tablero.selector.mover(key);
	
	switch (key)
	{
	case ' ':
		piezas.mover(tablero.selector,turno, ocupacion[tablero.selector.getFila()-1][tablero.selector.getColumna()-1],piezas);
		break;
	}
}

int Mundo::jaqueMate() {

	int n_reyes = 0;
	Pieza auxiliar;
	for (int i = 0; i < piezas.n; i++) {
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