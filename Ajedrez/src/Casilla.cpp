#include "Casilla.h"
#include "freeglut.h"

Casilla::Casilla() {

}

Casilla::Casilla(int f, int c) {
	fila = f;
	columna = c;
}

/*void Casilla::cuadrado(float _x, float _y, float tamanio) {

	tamanio /= 2;
	glBegin(GL_POLYGON);
	glColor3f(rojo, verde, azul);
	glVertex2f(_x + tamanio, _y + tamanio); glVertex2f(_x - tamanio, _y + tamanio);
	glVertex2f(_x - tamanio, _y - tamanio); glVertex2f(_x + tamanio, _y - tamanio);
	glEnd();
}*/