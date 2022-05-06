#include "Torre.h"
#include "freeglut.h"


Torre::Torre()
{
	sprite1.setCenter(0.0f, 0.0f);
	sprite1.setSize(1, 1);
	radio = 0.5f;
	fila=columna =0;


	sprite2.setCenter(0, 0);
	sprite2.setSize(1, 1);
	radio = 0.5f;
	fila = columna = 0;
}
	
void Torre::dibujaw()
{
		glPushMatrix();
		glTranslatef(posicion.x, posicion.y, 0.5);
		glColor3f(1.0f, 0.0f, 0.0f);
		sprite1.draw();
		glPopMatrix();
	
}
void Torre::dibujab()
{
	glPushMatrix();
	glTranslatef(posicion.x, posicion.y, 0.5); 
	glColor3f(1.0f, 0.0f, 0.0f);
	sprite2.draw();
	glPopMatrix();

}

void Torre::setDatos(float _r, int _f, int _c)
{
	radio = _r;
	Vector pos;
	posicion = pos.conversor(_f, _c);
} 
