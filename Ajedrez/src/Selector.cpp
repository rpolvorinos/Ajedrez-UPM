#include "Selector.h"
#include "freeglut.h"

//Constructor del selector
Selector::Selector() {
	fila = 1;
	columna = 1;
}

//Funcion para la inicializacion del selector
void Selector::inicializa() {
	Selector selector;
}

//Funcion para realizar el movimiento del selector en el tablero
void Selector::mover(unsigned char key) {
	switch (key)
	{
	case GLUT_KEY_LEFT:
		if (fila > 1)
			fila--;
		break;
	case GLUT_KEY_DOWN:
		if (columna > 1)
			columna--;
		break;
	case GLUT_KEY_RIGHT:
		if (fila < 8)
			fila++;
		break;
	case GLUT_KEY_UP:
		if (columna < 8)
			columna++;
		break;
	}
}

//Funcion que devuleve la fila
int Selector::getFila()
{
	return fila;
}

//Funcion que devuelve la columa
int Selector::getColumna()
{
	return columna;
}

//Funcion que devuelve el selector a su posicion incial
void Selector::reinicio() {
	fila = 4;
	columna = 4;
}
