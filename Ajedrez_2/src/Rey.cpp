#include "Rey.h"
#include "freeglut.h"

Rey::Rey()
{
	sprite1.setCenter(0, 0);
	sprite1.setSize(1, 1);
	radio = 0.5f;

	sprite2.setCenter(0, 0);
	sprite2.setSize(1, 1);
	radio = 0.5f;


}

Rey::Rey(int _f, int _c) {
	sprite1.setCenter(0, 0);
	sprite1.setSize(1, 1);
	radio = 0.01f;
	Vector pos1;
	posicion = pos1.conversor(_f, _c);
	fc.setCasillas(_f, _c);

	sprite2.setCenter(0, 0);
	sprite2.setSize(1, 1);
	radio = 0.01f;
	Vector pos2;
	posicion = pos2.conversor(_f, _c);
	fc.setCasillas(_f, _c);
}

void Rey::dibujaw()
{
	glPushMatrix();
	glTranslatef(posicion.x, posicion.y, 0.5);
	glColor3f(1.0f, 0.0f, 0.0f);
	sprite1.draw();
	glPopMatrix();

}
void Rey::dibujab()
{
	glPushMatrix();
	glTranslatef(posicion.x, posicion.y, 0.5);
	glColor3f(1.0f, 0.0f, 0.0f);
	sprite2.draw();
	glPopMatrix();

}

void Rey::setDatos(float r, int _f, int _c)
{
	fc.fila = _f;
	fc.columna = _c;
	radio = r;
	Vector pos;
	posicion = pos.conversor(_f, _c);

}
void Rey::movimiento(int _f, int _c) {

	fc.fila = _f;
	fc.columna = _c;
	Vector pos;
	posicion = pos.conversor(_f, _c);
}

