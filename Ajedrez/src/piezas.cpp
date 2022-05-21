#include "Piezas.h"
#include "freeglut.h"

void Piezas::inicializa() {

	//datos de incializacion de los peones
	for (float i = 1; i < 9; i = i++)
	{
		Peon* aux = new Peon(i, 7);
		piezas.agregar(aux);
	}

	for (float i = 1; i < 9; i++)
	{
		Peon* aux = new Peon(i, 2);
		piezas.agregar(aux);
	}

	//datos de inicializacion de las torres
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


	//datos de incializacion de los reyes
	for (float i = 1; i < 9; i = i + 7)
	{
		Rey* aux = new Rey(4, i);
		piezas.agregar(aux);
	}

	//datos de inicializacion de las damas
	for (float i = 1; i < 9; i = i + 7)
	{
		Dama* aux = new Dama(5, i);
		piezas.agregar(aux);
	}

	// datos de inicializacion de los alfiles
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

	
