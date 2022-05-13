#include "Caballos.h"
#include "freeglut.h"

Caballos::Caballos()
{
	azul = 255;
}

Caballos::Caballos(float r, float _x, float _y)
{
	radio = r;
	posicion.x = _x;
	posicion.y = _y;
	rojo = 0;
	verde = 255;
	azul = 0;
}

void Caballos::dibuja()
{
	glColor3f(rojo, verde, azul);
	glTranslatef(posicion.x, posicion.y, 0);
	glutSolidSphere(radio, 20, 20);
	glTranslatef(-posicion.x, -posicion.y, 0);
}

void Caballos::setDatos(float _r, float _x, float _y)
{
	radio = _r;
	posicion.x = _x;
	posicion.y = _y;
}