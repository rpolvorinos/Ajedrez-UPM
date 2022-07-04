#include "Casilla.h"
#include "freeglut.h"

//Constructor de casilla predeterminado
Casilla::Casilla() {

	rojo = 255;
	verde = 255;
	azul = 255;
	fila = 0;
	columna = 0;
}

//Funcion para indicar la posicion de la casilla
void Casilla::setCasillas(int f, int c) {
	fila = f;
	columna = c;
}

//Funcion para indicar el color de la casilla
void Casilla::setColor(unsigned char r, unsigned char v, unsigned char a) {
	rojo = r;
	verde = v;
	azul = a;
}

//Funcion para la representacion de una casilla
void Casilla::cuadrado(float _x, float _y, float tamanio) {

	tamanio /= 2;
	glBegin(GL_POLYGON);
	glColor3f(rojo, verde, azul);
	glVertex2f(_x + tamanio, _y + tamanio); glVertex2f(_x - tamanio, _y + tamanio);
	glVertex2f(_x - tamanio, _y - tamanio); glVertex2f(_x + tamanio, _y - tamanio);
	glEnd();
}

