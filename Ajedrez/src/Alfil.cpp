#include "Alfil.h"
#include "freeglut.h"

Alfil::Alfil()
{
	sprite5.setCenter(0, 0);
	sprite5.setSize(1, 1);
	radio = 0.5f;
	
	sprite6.setCenter(0, 0);
	sprite6.setSize(1, 1);
	radio = 0.5f;

	estado = 0;
	
}

Alfil::Alfil(int _f, int _c, int _color) {
	sprite5.setCenter(0, 0);
	sprite5.setSize(1, 1);
	radio = 0.01f;
	Vector pos1;
	posicion = pos1.conversor(_f, _c);

	sprite6.setCenter(0, 0);
	sprite6.setSize(1, 1);
	radio = 0.01f;
	Vector pos2;
	posicion = pos2.conversor(_f, _c);
	color = _color;
	estado = 0;
	fc.setCasillas(_f, _c);
	
}

void Alfil::dibuja() {

	posicion = posicion.conversor(fc.getF(), fc.getC());

	if (color == 0) {
		glPushMatrix();
		glTranslatef(posicion.getX(), posicion.getY(), 0.5);
		glColor3f(1.0f, 0.0f, 0.0f);
		sprite5.draw();
		glPopMatrix();
	}
	else {
		glPushMatrix();
		glTranslatef(posicion.getX(), posicion.getY(), 0.5);
		glColor3f(1.0f, 0.0f, 0.0f);
		sprite6.draw();
		glPopMatrix();
	}
}

int Alfil::getTipoPieza() {
	return 3;

}