#include "Caballo.h"
#include "freeglut.h"

//Constructor de caballo predeterminado
Caballo::Caballo()
{
	sprite3.setCenter(0, 0);
	sprite3.setSize(1, 1);
	radio = 0.5f;

	sprite4.setCenter(0, 0);
	sprite4.setSize(1, 1);
	radio = 0.5f;
	estado = 0;
}

//Constructor de los caballos blancos y negros
Caballo::Caballo(int _f, int _c, int _color) {
	sprite3.setCenter(0, 0);
	sprite3.setSize(1, 1);
	radio = 0.01f;
	Vector pos1;
	posicion = pos1.conversor(_f, _c);

	sprite4.setCenter(0, 0);
	sprite4.setSize(1, 1);
	radio = 0.01f;
	Vector pos2;
	posicion = pos2.conversor(_f, _c);
	color = _color;
	fc.setCasillas(_f, _c);
	estado = 0;
}

//Funcion para representar los caballos
void Caballo::dibuja() {

	posicion = posicion.conversor(fc.getF(), fc.getC());

	if (color == 0) {
		glPushMatrix();
		glTranslatef(posicion.getX(), posicion.getY(), 0.5);
		glColor3f(1.0f, 0.0f, 0.0f);
		sprite3.draw();
		glPopMatrix();
	}
	else {
		glPushMatrix();
		glTranslatef(posicion.getX(), posicion.getY(), 0.5);
		glColor3f(1.0f, 0.0f, 0.0f);
		sprite4.draw();
		glPopMatrix();
	}
}

//Funcion para saber que tipo de pieza es 
int Caballo::getTipoPieza() {
	return 2;
}