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

//datos de incializacion de los caballos
	for (float i = 2; i < 8; i = i + 5)
	{
		Caballo* aux = new Caballo(i, 8);
		piezas.agregar(aux);
	}

	for (float i = 2; i < 8; i = i + 5)
	{
		Caballo* aux = new Caballo(i, 1);
		piezas.agregar(aux);
	}

	estado = 0;
}

void Piezas::dibuja() {

	piezas.dibuja();
}

void Piezas::tecla(unsigned char key) {

	/**switch (key) {

	case GLUT_KEY_DOWN:
		torre1.getFC(torre1.fc.fila, torre1.fc.columna);
		torre1.fc = torre1.vertical(-1);
		break;

	case GLUT_KEY_UP:
		torre1.getFC(torre1.fc.fila, torre1.fc.columna);
		torre1.fc = torre1.vertical(1);
		break;

	case GLUT_KEY_LEFT:
		torre1.getFC(torre1.fc.fila, torre1.fc.columna);
		torre1.fc = torre1.horizontal(-1);
		break;

	case GLUT_KEY_RIGHT:
		torre1.getFC(torre1.fc.fila, torre1.fc.columna);
		torre1.fc = torre1.horizontal(1);
		break;
	}*/

}

void Piezas::mueve() {

	/*torre1.movimiento(torre1.fc.fila, torre1.fc.columna);*/
}
