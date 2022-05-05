#include "Tablero.h"
#include "freeglut.h"
#include "ETSIDI.h"

Tablero::Tablero() {

	rojo = verde = azul = 255;
};


void Tablero::setColor(unsigned char r, unsigned char v, unsigned char a) {
	rojo = r;
	verde = v;
	azul = a;
}

void Tablero::cuadradob(float _x,float _y,float tamanio) {

	tamanio /= 2;
	glBegin(GL_POLYGON);
	glColor3f(rojo, verde, azul);
		glVertex2f(_x + tamanio, _y + tamanio); glVertex2f(_x - tamanio, _y + tamanio);
		glVertex2f(_x - tamanio, _y - tamanio); glVertex2f(_x + tamanio, _y - tamanio);
		glEnd();
}

void Tablero::cuadradon(float _x, float _y, float tamanio) {

	tamanio /= 2;
	glBegin(GL_POLYGON);
	glColor3f(rojo, verde, azul);
	glVertex2f(_x + tamanio, _y + tamanio); glVertex2f(_x - tamanio, _y + tamanio);
	glVertex2f(_x - tamanio, _y - tamanio); glVertex2f(_x + tamanio, _y - tamanio);
	glEnd();
}

void Tablero::dibuja() {

	glClear(GL_COLOR_BUFFER_BIT);
	
	setColor(rojo, verde,azul);

	//Dibujo de los cuadrados blancos
			
			//Columna 1
		setColor(255, 255, 255);
			 cuadradob(-4.5, -4.5,1.5);
			 cuadradob(-4.5, -1.5,1.5);
			 cuadradob(-4.5, 1.5,1.5);
			 cuadradob(-4.5, 4.5,1.5);

		setColor(255, 0, 0);
		cuadradon(-4.5, -6, 1.5);
		cuadradon(-4.5, -3, 1.5);
		cuadradon(-4.5, 0, 1.5);
		cuadradon(-4.5, 3, 1.5);
			 //Columna 2
		setColor(255, 255, 255);
			 cuadradob(-3, -6, 1.5);
			 cuadradob(-3,-3, 1.5);
			 cuadradob(-3, 0, 1.5);
			 cuadradob(-3, 3, 1.5);
		 setColor(255, 0, 0);
			 cuadradon(-3, -4.5, 1.5);
			 cuadradon(-3, -1.5, 1.5);
			 cuadradon(-3, 1.5, 1.5);
			 cuadradon(-3, 4.5, 1.5);

			 
			 //Columna 3
			setColor(255, 255, 255);
			 cuadradob(-1.5, -4.5, 1.5);
			 cuadradob(-1.5,-1.5, 1.5);
			 cuadradob(-1.5, 1.5, 1.5);
			 cuadradob(-1.5, 4.5, 1.5);
			setColor(255, 0, 0);
			 cuadradon(-1.5, -6, 1.5);
			 cuadradon(-1.5, -3, 1.5);
			 cuadradon(-1.5, 0, 1.5);
			 cuadradon(-1.5, 3, 1.5);

			 
			 //Columna 4
			setColor(255, 255, 255);
			 cuadradob(0, -6, 1.5);
			 cuadradob(0, -3, 1.5);
			 cuadradob(0, 0, 1.5);
			 cuadradob(0,3, 1.5);
			setColor(255, 0, 0);
			 cuadradon(0, -4.5, 1.5);
			 cuadradon(0, -1.5, 1.5);
			 cuadradon(0, 1.5, 1.5);
			 cuadradon(0, 4.5, 1.5);
			 //Columna 5
			setColor(255, 255, 255);
			 cuadradob(1.5, -4.5, 1.5);
			 cuadradob(1.5, -1.5, 1.5);
			 cuadradob(1.5, 1.5, 1.5);
			 cuadradob(1.5, 4.5, 1.5);
			setColor(255, 0, 0);
			 cuadradon(1.5, -6, 1.5);
			 cuadradon(1.5, -3, 1.5);
			 cuadradon(1.5, 0, 1.5);
			 cuadradon(1.5, 3, 1.5);
			 //Columna 6
			setColor(255, 255, 255);
			 cuadradob(3, -6, 1.5);
			 cuadradob(3, -3, 1.5);
			 cuadradob(3, 0, 1.5);
			 cuadradob(3, 3, 1.5);
			 setColor(255, 0, 0);
			 cuadradon(3, -4.5, 1.5);
			 cuadradon(3, -1.5, 1.5);
			 cuadradon(3, 1.5, 1.5);
			 cuadradon(3, 4.5, 1.5);

			 //fila 7
			setColor(255, 255, 255);
			 cuadradob(4.5, -4.5, 1.5);
			 cuadradob(4.5, -1.5, 1.5);
			 cuadradob(4.5, 1.5, 1.5);
			 cuadradob(4.5, 4.5, 1.5);
			 setColor(255, 0, 0);
			 cuadradon(4.5, -6, 1.5);
			 cuadradon(4.5, -3, 1.5);
			 cuadradon(4.5, 0, 1.5);
			 cuadradon(4.5, 3, 1.5);
			 //fila 8
			setColor(255, 255, 255);
			 cuadradob(6, -6,1.5);
			 cuadradob(6, -3, 1.5);
			 cuadradob(6, 0, 1.5);
			 cuadradob(6, 3, 1.5);
		 setColor(255, 0, 0);
			 cuadradon(6, -4.5, 1.5);
			 cuadradon(6, -1.5, 1.5);
			 cuadradon(6, 1.5, 1.5);
			 cuadradon(6, 4.5, 1.5);
			 

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