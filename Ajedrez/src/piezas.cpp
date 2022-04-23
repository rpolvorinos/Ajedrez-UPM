#include "piezas.h"
#include "ListaPeones.h"
#include "freeglut.h"
#include <math.h>
#include "ETSIDI.h"
#include "Torres.h"

void Piezas::rotarOjo()
{
	float dist = sqrt(x_ojo * x_ojo + y_ojo * y_ojo);
	float ang = atan2(y_ojo, x_ojo);
	ang += 0.02f;
	x_ojo = dist * cos(ang);
	y_ojo = dist * sin(ang);
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
	glTexCoord2d(0, 1); glVertex3f(-4,-4,0);
	glTexCoord2d(1, 1); glVertex3f(4,-4, 0);
	glTexCoord2d(1, 0); glVertex3f(4,4,0);
	glTexCoord2d(0, 0); glVertex3f(-4,4,0);
	glEnd();
	glEnable(GL_LIGHTING);
	glDisable(GL_TEXTURE_2D);

	peones.dibuja();
	torre1.dibuja();
	torre2.dibuja();
	torre3.dibuja();
	torre4.dibuja();
}

void Piezas::mueve()
{

}

void Piezas::inicializa()
{
	x_ojo = 0;
	y_ojo = 12;
	z_ojo = 15;

	for (float i = -3.5;i < 4.5;i++)
	{
		Peones* aux = new Peones(0.5,i,2.5);
		peones.agregar(aux);
	}

	for (float i = -3.5;i < 4.5;i++)
	{
		Peones* aux = new Peones(0.5, i, -2.5);
		peones.agregar(aux);
	}

	torre1.setDatos(0.5, 3.5, 3.5);
	torre2.setDatos(0.5, 3.5, -3.5);
	torre3.setDatos(0.5, -3.5, 3.5);
	torre4.setDatos(0.5, -3.5, -3.5);
}

void Piezas::tecla(unsigned char key)
{
	
}