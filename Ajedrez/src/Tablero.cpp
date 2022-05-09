#include "Tablero.h"
#include "freeglut.h"
#include "ETSIDI.h"

Tablero::Tablero() {
}

void Tablero::dibuja() {

	glClear(GL_COLOR_BUFFER_BIT);
	

	for (int fila = 1; fila <= 8; fila++) {
		for (int columna = 1; columna <= 8; columna++) {
			posicion.x = fila*1.5 - 6;
			posicion.y = columna*1.5 - 7.5;
			
			if (fila == selector.fila && columna == selector.columna) {

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
				
			casillas[fila-1][columna-1].cuadrado(posicion.x, posicion.y, 1.5);
			posf[fila - 1] = posicion.x;
			posc[columna - 1] = posicion.y;

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

