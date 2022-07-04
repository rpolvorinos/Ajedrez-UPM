#include "Peon.h"
#include "freeglut.h"

//Constructor de peon predeterminado
Peon::Peon()
{
	sprite11.setCenter(0, 0);
	sprite11.setSize(1, 1);
	radio = 0.25f;

	sprite12.setCenter(0, 0);
	sprite12.setSize(1, 1);
	radio = 0.25f;

	estado = 0;
}

//Constructor de los alfiles blanco y negro
Peon::Peon(int _f, int _c, int _color) {
	sprite11.setCenter(0, 0);
	sprite11.setSize(1, 1);
	radio = 0.01f;
	Vector pos1;
	posicion = pos1.conversor(_f, _c);

	sprite12.setCenter(0, 0);
	sprite12.setSize(1, 1);
	radio = 0.01f;
	Vector pos2;
	posicion = pos2.conversor(_f, _c);
	color = _color;
	estado = 0;
	fc.setCasillas(_f, _c);
}

//Funcion que dibuja los peones en sus respectivas posiciones
void Peon::dibuja() {

	posicion = posicion.conversor(fc.getF(), fc.getC());

	if (color == 0) {
		glPushMatrix();
		glTranslatef(posicion.getX(), posicion.getY(), 0.5);
		glColor3f(1.0f, 0.0f, 0.0f);
		sprite11.draw();
		glPopMatrix();
	}
	else {
		glPushMatrix();
		glTranslatef(posicion.getX(), posicion.getY(), 0.5);
		glColor3f(1.0f, 0.0f, 0.0f);
		sprite12.draw();
		glPopMatrix();
	}
}

//Funcion que nos indica el tipo de pieza
int Peon::getTipoPieza() {
	return 6;
}