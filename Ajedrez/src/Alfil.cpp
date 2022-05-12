#include "Alfil.h"
#include "freeglut.h"

Alfil::Alfil()
{
	sprite1.setCenter(0, 0);
	sprite1.setSize(1, 1);
	radio = 0.5f;
	//fila = columna = 0;
	sprite2.setCenter(0, 0);
	sprite2.setSize(1, 1);
	radio = 0.5f;

	estado = 0;
	//fila = columna = 0;
}

Alfil::Alfil(int _f, int _c) {
	sprite1.setCenter(0, 0);
	sprite1.setSize(1, 1);
	radio = 0.01f;
	Vector pos1;
	posicion = pos1.conversor(_f, _c);

	sprite2.setCenter(0, 0);
	sprite2.setSize(1, 1);
	radio = 0.01f;
	Vector pos2;
	posicion = pos2.conversor(_f, _c);

	estado = 0;
	fc.fila = _f;
	fc.columna = _c;
}

void Alfil::dibujaw()
{
	glPushMatrix();
	glTranslatef(posicion.x, posicion.y, 0.5);
	glColor3f(1.0f, 0.0f, 0.0f);
	sprite1.draw();
	glPopMatrix();

}
void Alfil::dibujab()
{
	glPushMatrix();
	glTranslatef(posicion.x, posicion.y, 0.5);
	glColor3f(1.0f, 0.0f, 0.0f);
	sprite2.draw();
	glPopMatrix();

}

void Alfil::setDatos(float _r, int _f, int _c)
{
	fc.fila = _f;
	fc.columna = _c;
	radio = _r;
	Vector pos;
	posicion = pos.conversor(_f, _c);
}