#include "Caballo.h"
#include "freeglut.h"

Caballo::Caballo()
{
	sprite1.setCenter(0, 0);
	sprite1.setSize(1, 1);
	radio = 0.5f;
	//fila = columna = 0;

	sprite2.setCenter(0, 0);
	sprite2.setSize(1, 1);
	radio = 0.5f;
	//fila = columna = 0;
	estado = 0;
}

Caballo::Caballo(int _f, int _c, int _color) {
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
	fc.columna = _c;
	fc.fila=_f;
	estado = 0;
}

void Caballo::dibujaw()
{
	glPushMatrix();
	glTranslatef(posicion.x, posicion.y, 0.5);
	glColor3f(1.0f, 0.0f, 0.0f);
	sprite1.draw();
	glPopMatrix();
	color = 0;
}
void Caballo::dibujab()
{
	glPushMatrix();
	glTranslatef(posicion.x, posicion.y, 0.5);
	glColor3f(1.0f, 0.0f, 0.0f);
	sprite2.draw();
	glPopMatrix();
	color = 1;
}

void Caballo::dibuja() {

	if (color == 1) {
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
