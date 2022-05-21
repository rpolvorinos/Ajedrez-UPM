#include "Selector.h"
#include "freeglut.h"

Selector::Selector() {
	fila = 4;
	columna = 4;
}

void Selector::inicializa() {
	Selector selector;
}

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
int Selector::getFila()
{
	return fila;
}

int Selector::getColumna()
{
	return columna;
}
