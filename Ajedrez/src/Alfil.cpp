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

Alfil::Alfil(int _f, int _c, int _color) {
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

void Alfil::dibuja() {

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

int Alfil::getTipoPieza() {
	return 3;
}