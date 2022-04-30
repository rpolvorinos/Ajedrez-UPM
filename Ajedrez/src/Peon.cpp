#include "Peon.h"
#include "freeglut.h"


Peon::Peon()
{
	sprite1.setCenter(0, 0);
	sprite1.setSize(1, 1);
	radio = 0.25f;

	sprite2.setCenter(0, 0);
	sprite2.setSize(1, 1);
	radio = 0.25f;

}
Peon::Peon(float _x, float _y) {
	sprite1.setCenter(0, 0);
	sprite1.setSize(1, 1);
	radio = 0.01f;
	posicion.x = _x;
	posicion.y = _y;

	sprite2.setCenter(0, 0);
	sprite2.setSize(1, 1);
	radio = 0.01f;
	posicion.x = _x;
	posicion.y = _y;
}

void Peon::dibujaw()
{
	glPushMatrix();
	glTranslatef(posicion.x, posicion.y, 0.5);
	glColor3f(1.0f, 0.0f, 0.0f);
	sprite1.draw();
	glPopMatrix();

}
void Peon::dibujab()
{
	glPushMatrix();
	glTranslatef(posicion.x, posicion.y, 0.5);
	glColor3f(1.0f, 0.0f, 0.0f);
	sprite2.draw();
	glPopMatrix();

}
