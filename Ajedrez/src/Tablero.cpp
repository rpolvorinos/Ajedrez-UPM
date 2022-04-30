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

void Tablero::cuadrado(float _x,float _y,float tamanio) {

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
			 cuadrado(-4, -3,1);
			 cuadrado(-4, -1,1);
			 cuadrado(-4, 1,1);
			 cuadrado(-4, 3,1);

			 //Columna 2
			 cuadrado(-3,-4, 1);
			 cuadrado(-3,-2, 1);
			 cuadrado(-3, 0, 1);
			 cuadrado(-3, 2, 1);

			 //Columna 3
			 cuadrado(-2, -3, 1);
			 cuadrado(-2,-1, 1);
			 cuadrado(-2, 1, 1);
			 cuadrado(-2, 3, 1);

			 //Columna 4
			 cuadrado(-1, -4, 1);
			 cuadrado(-1, -2, 1);
			 cuadrado(-1, 0, 1);
			 cuadrado(-1, 2, 1);

			 //Columna 5
			 cuadrado(0, -3, 1);
			 cuadrado(0, -1, 1);
			 cuadrado(0, 1, 1);
			 cuadrado(0, 3, 1);

			 //Columna 6
			 cuadrado(1, -4, 1);
			 cuadrado(1, -2, 1);
			 cuadrado(1, 0, 1);
			 cuadrado(1, 2, 1);
			 //fila 7
			 cuadrado(2, -3, 1);
			 cuadrado(2, -1, 1);
			 cuadrado(2, 1, 1);
			 cuadrado(2, 3, 1);
			 //fila 8
			 cuadrado(3, -4,1);
			 cuadrado(3, -2, 1);
			 cuadrado(3, 0, 1);
			 cuadrado(3, 2, 1);


			 //Dibujo del contorno
			 glLineWidth(4);
			 glBegin(GL_LINES);
			 glColor3f(128, 64, 0);
			 glVertex2f(3.55, -4.55);
			 glVertex2f(3.55, 3.55);
			 glVertex2f(3.55, 3.55);
			 glVertex2f(-4.55, 3.55);
			 glVertex2f(-4.55, 3.55);
			 glVertex2f(-4.55, -4.55);
			 glVertex2f(-4.55, -4.55);
			 glVertex2f(3.55, -4.55);
			 glEnd();

}