#include "peones.h"
#include "freeglut.h"

Peones::Peones()
{
	rojo = 255;
	radio = 0.5f;
	
}

Peones::Peones(float r, float _x, float _y)
{
	radio = r;
	posicion.x = _x;
	posicion.y = _y;
	rojo=255;
	verde = 0;
	azul = 0;
}

void Peones::dibuja()
{
	glColor3f(rojo, verde, azul);
	glTranslatef(posicion.x, posicion.y, 0);
	glutSolidSphere(radio, 20, 20);
	glTranslatef(-posicion.x, -posicion.y, 0);
}