#include "Tablero.h"
#include "freeglut.h"
#include "ETSIDI.h"

Tablero::Tablero() {

	fila_selector = 4;
	columna_selector = 4;
}

void Tablero::dibuja() {

	glClear(GL_COLOR_BUFFER_BIT);
	
	float x, y;

	for (int fila = 1; fila <= 8; fila++) {
		for (int columna = 1; columna <= 8; columna++) {
			x = fila*1.5 - 6;
			y = columna*1.5 - 7.5;
			
			/*if (fila == Seleccion.fila && columna == Seleccion.columna) {
			casillas[fila - 1][columna - 1].setColor(0,255,0);
			SI LA CASILLA ES LA SELECCIONADA POR EL USUARIO, LA PINTAMOS DE VERDE
			}
			else
			*/

			if (fila == fila_selector && columna== columna_selector)
				casillas[fila - 1][columna - 1].setColor(0, 255, 0);
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
				
			casillas[fila-1][columna-1].cuadrado(x, y, 1.5);

		}
	}
	 
			 //Dibujo del contorno
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

}

void Tablero::setSelector(int aux)
{
	if (aux == 1 && fila_selector>1)
		fila_selector--;

	if (aux == 2 && columna_selector > 1)
		columna_selector--;

	if (aux == 3 && fila_selector < 8)
		fila_selector++;

	if (aux == 4 && columna_selector < 8)
		columna_selector++;
}