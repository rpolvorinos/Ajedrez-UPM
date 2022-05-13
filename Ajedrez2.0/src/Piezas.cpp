#include "Piezas.h"
#include "freeglut.h"

void Piezas::inicializa() {

	//datos de incializacion de los peones
	for (float i = 1; i < 9; i = i++)
	{
		Peon* aux = new Peon(i, 7);
		p.agregar(aux);
	}

	for (float i = 1; i < 9; i++)
	{
		Peon* aux = new Peon(i, 2);
		p.agregar(aux);
	}

	//datos de inicializacion de las torres
	for (float i = 1; i < 9; i = i + 7)
	{
		Torre* aux = new Torre(i, 8);
		p.agregar(aux);
	}

	for (float i = 1; i < 9; i = i + 7)
	{
		Torre* aux = new Torre(i, 1);
		p.agregar(aux);
	}


	//datos de incializacion de los reyes
	for (float i = 1; i < 9; i = i + 7)
	{
		Rey* aux = new Rey(4, i);
		p.agregar(aux);
	}

	//datos de inicializacion de las damas
	for (float i = 1; i < 9; i = i + 7)
	{
		Dama* aux = new Dama(5, i);
		p.agregar(aux);
	}

	// datos de inicializacion de los alfiles
	for (float i = 3; i < 7; i = i + 3)
	{
		Alfil* aux = new Alfil(i, 8);
		p.agregar(aux);
	}

	for (float i = 3; i < 7; i = i + 3)
	{
		Alfil* aux = new Alfil(i, 1);
		p.agregar(aux);
	}

	//datos de incializacion de los caballos
	for (float i = 2; i < 8; i = i + 5)
	{
		Caballo* aux = new Caballo(i, 8);
		p.agregar(aux);
	}

	for (float i = 2; i < 8; i = i + 5)
	{
		Caballo* aux = new Caballo(i, 1);
		p.agregar(aux);
	}

	estado = 0;
}

void Piezas::dibuja() {

	p.dibuja();
}

void Piezas::tecla(unsigned char key) {

	switch (key) {

		/*case GLUT_KEY_DOWN:
		p.lista2[1]->getFC(p.lista2[1]->fc.fila, p.lista2[1]->fc.columna);
		p.lista2[1]->fc = p.lista2[1]->vertical(-1);
		p.lista2[1]->movimiento(p.lista2[1]->fc.fila, p.lista2[1]->fc.columna);
		break;

	case GLUT_KEY_UP:
		p.lista2[1]->getFC(p.lista2[1]->fc.fila, p.lista2[1]->fc.columna);
		p.lista2[1]->fc = p.lista2[1]->vertical(1);
		p.lista2[1]->movimiento(p.lista2[1]->fc.fila, p.lista2[1]->fc.columna);
		break;

	case GLUT_KEY_LEFT:
		p.lista2[1]->getFC(p.lista2[1]->fc.fila, p.lista2[1]->fc.columna);
		p.lista2[1]->fc = p.lista2[1]->horizontal(-1);
		p.lista2[1]->movimiento(p.lista2[1]->fc.fila, p.lista2[1]->fc.columna);
		break;

	case GLUT_KEY_RIGHT:
		p.lista2[1]->getFC(p.lista2[1]->fc.fila, p.lista2[1]->fc.columna);
		p.lista2[1]->fc = p.lista2[1]->horizontal(1);
		p.lista2[1]->movimiento(p.lista2[1]->fc.fila, p.lista2[1]->fc.columna);
		break;
	}*/

	}
}

void Piezas::mueve() {


}