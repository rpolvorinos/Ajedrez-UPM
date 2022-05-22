#include "Torre.h"
#include "freeglut.h"


Torre::Torre()
{
	sprite1.setCenter(0.0f, 0.0f);
	sprite1.setSize(1, 1);
	radio = 0.5f;


	sprite2.setCenter(0, 0);
	sprite2.setSize(1, 1);
	radio = 0.5f;

	estado = 0;
}
Torre::Torre(int _f, int _c, int _color) {
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
	color = _color;
	estado = 0;
	fc.fila = _f;
	fc.columna = _c;
}
	
void Torre::dibuja() {

	posicion = posicion.conversor(fc.fila, fc.columna);
	if (color == 0) {
		glPushMatrix();
		glTranslatef(posicion.x, posicion.y, 0.5);
		glColor3f(1.0f, 0.0f, 0.0f);
		sprite1.draw();
		glPopMatrix();
	}
	else {
		glPushMatrix();
		glTranslatef(posicion.x, posicion.y, 0.5);
		glColor3f(1.0f, 0.0f, 0.0f);
		sprite2.draw();
		glPopMatrix();
	}
}


void Torre::movimiento(int _f, int _c) {

	Vector pos;
	posicion=pos.conversor(_f, _c);
}

int Torre::getFila()
{
	return fc.fila;
}

int Torre::getColumna()
{
	return fc.columna;
}

int Torre::getTipoPieza() {
	return 1;
}