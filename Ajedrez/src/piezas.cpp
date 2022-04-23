#include "piezas.h"
#include "freeglut.h"
#include <math.h>
#include "ETSIDI.h"

void Piezas::rotarOjo()
{
	float dist = sqrt(x_ojo * x_ojo + z_ojo * z_ojo);
	float ang = atan2(z_ojo, x_ojo);
	ang += 0.05f;
	x_ojo = dist * cos(ang);
	z_ojo = dist * sin(ang);
}
void Piezas::dibuja()
{
	gluLookAt(x_ojo, y_ojo, z_ojo,  // posicion del ojo
		0.0, 0, 0.0,      // hacia que punto mira  (0,0,0) 
		0.0, 0.0, 1.0);      // definimos hacia arriba (eje Y)    

//aqui es donde hay que poner el codigo de dibujo
//dibujo del suelo
	
	glEnable(GL_TEXTURE_2D);
	glBindTexture(GL_TEXTURE_2D, ETSIDI::getTexture("imagenes/tablero.png").id);
	glDisable(GL_LIGHTING);
	glBegin(GL_POLYGON);
	glColor3f(1, 1, 1);
	glTexCoord2d(0, 1); glVertex3f(-5,-5,0);
	glTexCoord2d(1, 1); glVertex3f(5,-5, 0);
	glTexCoord2d(1, 0); glVertex3f(5,5,0);
	glTexCoord2d(0, 0); glVertex3f(-5,5,0);
	glEnd();
	glEnable(GL_LIGHTING);
	glDisable(GL_TEXTURE_2D);
}

void Piezas::mueve()
{

}

void Piezas::inicializa()
{
	x_ojo = 0;
	y_ojo = 12;
	z_ojo = 15;
}

void Piezas::tecla(unsigned char key)
{

}