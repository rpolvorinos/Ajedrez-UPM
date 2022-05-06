#include "Casillas.h"
#include "freeglut.h"

Casillas::Casillas() {

	rojo = 255;
	verde = 255;
	azul = 255;
	fila = 0;
	columna = 0;
}

void Casillas::setCasillas(int f, int c) {
	fila = f;
	columna = c;
}

void Casillas::setColor(unsigned char r, unsigned char v, unsigned char a) {
	rojo = r;
	verde = v;
	azul = a;
}

void Casillas::cuadrado(float _x, float _y, float tamanio) {

	tamanio /= 2;
	glBegin(GL_POLYGON);
	glColor3f(rojo, verde, azul);
	glVertex2f(_x + tamanio, _y + tamanio); glVertex2f(_x - tamanio, _y + tamanio);
	glVertex2f(_x - tamanio, _y - tamanio); glVertex2f(_x + tamanio, _y - tamanio);
	glEnd();
}