#include "Rey.h"
#include "freeglut.h"

Rey::Rey()
{
	sprite7.setCenter(0, 0);
	sprite7.setSize(1, 1);
	radio = 0.5f;
	
	sprite8.setCenter(0, 0);
	sprite8.setSize(1, 1);
	radio = 0.5f;
	estado = 0;
}

Rey::Rey(int _f, int _c, int _color) {
	sprite7.setCenter(0, 0);
	sprite7.setSize(1, 1);
	radio = 0.01f;
	Vector pos1;
	posicion = pos1.conversor(_f, _c);

	sprite8.setCenter(0, 0);
	sprite8.setSize(1, 1);
	radio = 0.01f;
	Vector pos2;
	posicion = pos2.conversor(_f, _c);
	color = _color;
	estado = 0;
	fc.setCasillas(_f, _c);
}


void Rey::dibuja() {

	posicion = posicion.conversor(fc.getF(), fc.getC());

	if (color == 0) {
		glPushMatrix();
		glTranslatef(posicion.getX(), posicion.getY(), 0.5);
		glColor3f(1.0f, 0.0f, 0.0f);
		sprite7.draw();
		glPopMatrix();
	}
	else {
		glPushMatrix();
		glTranslatef(posicion.getX(), posicion.getY(), 0.5);
		glColor3f(1.0f, 0.0f, 0.0f);
		sprite8.draw();
		glPopMatrix();
	}
}

int Rey::getTipoPieza() {
	return 5;
}
