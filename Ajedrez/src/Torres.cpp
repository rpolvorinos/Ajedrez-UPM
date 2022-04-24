#include "Torres.h"
#include "freeglut.h"

Torres::Torres()
{
	verde = 255;
}

Torres::Torres(float r, float _x, float _y)
{
	radio = r;
	posicion.x = _x;
	posicion.y = _y;
	rojo = 0;
	verde = 255;
	azul = 0;
}

void Torres::dibuja()
{
	glColor3f(rojo, verde, azul);
	glTranslatef(posicion.x, posicion.y, 0);
	glutSolidSphere(radio, 20, 20);
	glTranslatef(-posicion.x, -posicion.y, 0);
}

void Torres::setDatos(float _r, float _x, float _y)
{
	radio = _r;
	posicion.x = _x;
	posicion.y = _y;
}