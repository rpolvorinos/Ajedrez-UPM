#include "Mundo.h"
#include "freeglut.h"
#include <math.h>
#include "ETSIDI.h"

void Mundo::rotarOjo()
{
	float dist = sqrt(x_ojo * x_ojo + y_ojo * y_ojo);
	float ang = atan2(y_ojo, x_ojo);
	ang += 0.02f;
	x_ojo = dist * cos(ang);
	y_ojo = dist * sin(ang);
}
void Mundo::dibuja()
{

	

	gluLookAt(x_ojo, y_ojo, z_ojo,  // posicion del ojo
		0,0,0,    // hacia que punto mira  (0,0,0) 
		0.0, 0.0, 1.0);      // definimos hacia arriba (eje Z)    

//aqui es donde hay que poner el codigo de dibujo
// 
//Dibujo del tablero
	
	tablero.dibuja();
	
	
	//Dibujo de las torres
	torre1.dibujab();
	torre2.dibujaw();
	torre3.dibujab();
	torre4.dibujaw();

	//Dibujo de los reyes
	rey1.dibujab();
	rey2.dibujaw();

	//Dibujo de las damas
	dama1.dibujab();
	dama2.dibujaw();

	//Dibujo de los alfiles
	alfil1.dibujab();
	alfil2.dibujaw();
	alfil3.dibujab();
	alfil4.dibujaw();

	//Dibujo de los caballos
	caballo1.dibujab();
	caballo2.dibujaw();
	caballo3.dibujab();
	caballo4.dibujaw();

	peones.dibuja();

}

void Mundo::mueve()
{

}

void Mundo::inicializa()
{
	x_ojo = 0;
	y_ojo = -0.5;
	z_ojo = 13;

	for (float i = -9.35;i < -1.6;i=i+0.97)
	{
		Peon* aux = new Peon(i,-3.35f);
		peones.agregar(aux);
	}

	for (float i = -9.35; i < -1.6; i = i + 0.97)
	{
		Peon* aux = new Peon(i, 1.35f);
		peones.agregar(aux);
	}
	
	//datos de inicializacion de las torres
	torre1.setDatos(0.25f,-9.35f,2.35f);
	torre2.setDatos(0.25f,-9.35f,-4.35f);
	torre3.setDatos(0.25f,-2.6f,2.35);
	torre4.setDatos(0.25f, -2.6f,-4.35);

	//datos de incializacion de los reyes
	rey1.setDatos(0.25f, -5.5, 2.35f);
	rey2.setDatos(0.25f, -5.5, -4.35);

	//datos de inicializacion de las damas
	dama1.setDatos(0.25f, -6.45, 2.35f);
	dama2.setDatos(0.25f, -6.45, -4.35);

	// datos de inicializacion de los alfiles
	alfil1.setDatos(0.1f, -4.55f, 2.35f);
	alfil2.setDatos(0.1f, -4.55f, -4.35f);
	alfil3.setDatos(0.1f, -7.4f, 2.35);
	alfil4.setDatos(0.1f, -7.4f, -4.35);

	//datos de incializacion de los caballos
	caballo1.setDatos(0.25f, -8.35f, 2.35f);
	caballo2.setDatos(0.25f, -8.35f, -4.35f);
	caballo3.setDatos(0.25f, -3.6f, 2.35);
	caballo4.setDatos(0.25f, -3.6f, -4.35);

	//datos de inicializacion del tablero
	tablero.setColor(255, 255, 255);
}

void Mundo::tecla(unsigned char key)
{
	
}