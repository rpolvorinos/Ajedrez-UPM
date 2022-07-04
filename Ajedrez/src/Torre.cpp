#include "Torre.h"
#include "freeglut.h"

//Constructor de la torre predeterminado
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

//Constructor de las torres blanco y negro
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
	fc.setCasillas(_f, _c);
}

//Funcion que dibuja las torres en sus respectivas posiciones
void Torre::dibuja() {

	posicion = posicion.conversor(fc.getF(), fc.getC());
	if (color == 0) {
		glPushMatrix();
		glTranslatef(posicion.getX(), posicion.getY(), 0.5);
		glColor3f(1.0f, 0.0f, 0.0f);
		sprite1.draw();
		glPopMatrix();
	}
	else {
		glPushMatrix();
		glTranslatef(posicion.getX(), posicion.getY(), 0.5);
		glColor3f(1.0f, 0.0f, 0.0f);
		sprite2.draw();
		glPopMatrix();
	}
}

//Funcion que nos indica el tipo de pieza
int Torre::getTipoPieza() {
	return 1;
}