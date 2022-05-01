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
	
	//Dibujo de los peones
	peones.dibuja();
	
}

void Mundo::mueve()
{

}

void Mundo::inicializa()
{
	x_ojo = 0;
	y_ojo = -0.5;
	z_ojo = 23;

	for (float i = -9.9; i < 1; i = i + 1.47)
	{
		Peon* aux = new Peon(i, 2.35f);
		peones.agregar(aux);
	}

	for (float i = -9.9; i < 1; i = i + 1.47)
	{
		Peon* aux = new Peon(i, -4.85f);
		peones.agregar(aux);
	}

	//datos de inicializacion de las torres
	torre1.setDatos(0.25f, -9.9f, 3.85f);
	torre2.setDatos(0.25f, -9.9f, -6.4f);
	torre3.setDatos(0.25f, 0.35f, 3.85f);
	torre4.setDatos(0.25f, 0.35f, -6.4f);

	//datos de incializacion de los reyes
	rey1.setDatos(0.25f, -4.05, 3.85f);
	rey2.setDatos(0.25f, -4.05, -6.4);

	//datos de inicializacion de las damas
	dama1.setDatos(0.25f, -5.55, 3.85f);
	dama2.setDatos(0.25f, -5.55, -6.4);

	// datos de inicializacion de los alfiles
	alfil1.setDatos(0.25f, -7.0f, 3.85f);
	alfil2.setDatos(0.25f, -7.0f, -6.4f);
	alfil3.setDatos(0.25f, -2.55f, 3.85f);
	alfil4.setDatos(0.25f, -2.55f, -6.4f);

	//datos de incializacion de los caballos
	caballo1.setDatos(0.25f, -8.45f, 3.85f);
	caballo2.setDatos(0.25f, -8.45f, -6.4f);
	caballo3.setDatos(0.25f, -1.15f, 3.85f);
	caballo4.setDatos(0.25f, -1.15f, -6.4f);

	//datos de inicializacion del tablero
	tablero.setColor(255, 255, 255);

}

void Mundo::tecla(unsigned char key)
{
	
}