#include "Alfiles.h"
#include "freeglut.h"

Alfiles::Alfiles()
{
	verde = 255;
	azul = 255;
}

Alfiles::Alfiles(float r, float _x, float _y)
{
	radio = r;
	posicion.x = _x;
	posicion.y = _y;
	rojo = 0;
	verde = 255;
	azul = 0;
}

void Alfiles::dibuja()
{
	glColor3f(rojo, verde, azul);
	glTranslatef(posicion.x, posicion.y, 0);
	glutSolidSphere(radio, 20, 20);
	glTranslatef(-posicion.x, -posicion.y, 0);
}

void Alfiles::setDatos(float _r, float _x, float _y)
{
	radio = _r;
	posicion.x = _x;
	posicion.y = _y;
}