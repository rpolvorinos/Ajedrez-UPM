#include "Mundo.h"
#include "freeglut.h"
#include <math.h>
#include "ETSIDI.h"
#include "Interaccion.h"

void Mundo::rotarOjo()
{
	/*float dist = sqrt(x_ojo * x_ojo + y_ojo * y_ojo);
	float ang = atan2(y_ojo, x_ojo);
	ang -= 90.0f;
	x_ojo = dist * cos(ang);
	y_ojo = dist * sin(ang);
	*/

	glRotatef(y_ojo, 0, 1, 0);

}
void Mundo::dibuja()
{
	gluLookAt(x_ojo, y_ojo, z_ojo,  // posicion del ojo
		0.0,0.0,0.0,    // hacia que punto mira  (0,0,0) 
		0.0, 0.0, 1.0);      // definimos hacia arriba (eje Z)    

//aqui es donde hay que poner el codigo de dibujo
// 
//Dibujo del tablero
	
	tablero.dibuja(); //se dibuja el tablero
	/*
	torres.dibuja();
	caballos.dibuja();
	alfiles.dibuja();
	reyes.dibuja();
	damas.dibuja();
	peones.dibuja();*/
	piezas.dibuja();
}

void Mundo::mueve()
{
}

void Mundo::inicializa()
{
	x_ojo = 0.0;
	y_ojo = -0.01;
	z_ojo = 23;

	tablero.selector.inicializa();

	for (float i = 1; i < 9; i = i + 7)
	{
		Torre* aux = new Torre(i, 8);
		piezas.agregar(aux);
	}
	for (float i = 1; i < 9; i = i + 7)
	{
		Torre* aux = new Torre(i, 1);
		piezas.agregar(aux);
	}

	for (float i = 3; i < 7; i = i + 3)
	{
		Alfil* aux = new Alfil(i, 8);
		piezas.agregar(aux);
	}

	for (float i = 3; i < 7; i = i + 3)
	{
		Alfil* aux = new Alfil(i, 1);
		piezas.agregar(aux);
	}
	/*
	//datos de inicializacion de las torres
	for (float i = 1; i < 9; i = i + 7)
	{
		Torre* aux = new Torre(i, 8);
		torres.agregar(aux);
	}

	for (float i = 1; i < 9; i = i + 7)
	{
		Torre* aux = new Torre(i, 1);
		torres.agregar(aux);
	}

	//datos de incializacion de los caballos
	for (float i = 2; i < 8; i = i + 5)
	{
		Caballo* aux = new Caballo(i, 8);
		caballos.agregar(aux);
	}

	for (float i = 2; i < 8; i = i + 5)
	{
		Caballo* aux = new Caballo(i, 1);
		caballos.agregar(aux);
	}

	// datos de inicializacion de los alfiles
	for (float i = 3; i < 7; i = i + 3)
	{
		Alfil* aux = new Alfil(i, 8);
		alfiles.agregar(aux);
	}

	for (float i = 3; i < 7; i = i + 3)
	{
		Alfil* aux = new Alfil(i, 1);
		alfiles.agregar(aux);
	}
	
	//datos de incializacion de los reyes
	for (float i = 1; i < 9; i = i + 7)
	{
		Rey* aux = new Rey(4, i);
		reyes.agregar(aux);
	}

	//datos de inicializacion de las damas
	for (float i = 1; i < 9; i = i + 7)
	{
		Dama* aux = new Dama(5, i);
		damas.agregar(aux);
	}

	//datos de incializacion de los peones
	for (float i = 1; i < 9; i = i++)
	{
		Peon* aux = new Peon(i, 7);
		peones.agregar(aux);
	}

	for (float i = 1; i < 9; i++)
	{
		Peon* aux = new Peon(i, 2);
		peones.agregar(aux);
	}*/
}

void Mundo::tecla(unsigned char key)
{
	tablero.selector.mover(key);

	//piezas.tecla(key);
	/*
	switch (key) {
	case 'q':
		torres.mover(tablero.selector);
		alfiles.mover(tablero.selector);
		peones.mover(tablero.selector);
		//for (int i = 0;i < 4;i++)
			//Interaccion::mov(*torres[i], tablero.selector);
		break;
	}*/

	switch (key)
	{
	case 'a':
		piezas.mover(tablero.selector);
		break;
	}
}