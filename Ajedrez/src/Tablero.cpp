#include "Tablero.h"
#include "freeglut.h"
#include "ETSIDI.h"

Tablero::Tablero() {
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
			if ((fila + columna) & 1)
				casillas[fila - 1][columna - 1].setColor(255, 255, 255);
			else
				casillas[fila - 1][columna - 1].setColor(255, 0, 0);
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