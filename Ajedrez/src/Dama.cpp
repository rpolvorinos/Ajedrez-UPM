#include "Dama.h"
#include "freeglut.h"

Dama::Dama()
{
	sprite9.setCenter(0, 0);
	sprite9.setSize(1, 1);
	radio = 0.5f;

	sprite10.setCenter(0, 0);
	sprite10.setSize(1, 1);
	radio = 0.5f;

	estado = 0;
}


Dama::Dama(int _f, int _c, int _color) {
	sprite9.setCenter(0, 0);
	sprite9.setSize(1, 1);
	radio = 0.01f;
	Vector pos1;
	posicion = pos1.conversor(_f, _c);

	sprite10.setCenter(0, 0);
	sprite10.setSize(1, 1);
	radio = 0.01f;
	Vector pos2;
	posicion = pos2.conversor(_f, _c);
	color = _color;
	fc.setCasillas(_f, _c);
	estado = 0;
}

void Dama::dibuja() {

	posicion = posicion.conversor(fc.getF(), fc.getC());

	if (color == 0) {
		glPushMatrix();
		glTranslatef(posicion.getX(), posicion.getY(), 0.5);
		glColor3f(1.0f, 0.0f, 0.0f);
		sprite9.draw();
		glPopMatrix();
	}
	else {
		glPushMatrix();
		glTranslatef(posicion.getX(), posicion.getY(), 0.5);
		glColor3f(1.0f, 0.0f, 0.0f);
		sprite10.draw();
		glPopMatrix();
	}
}
int Dama::getTipoPieza() {
	return 4;
}