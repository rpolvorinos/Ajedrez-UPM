#include "piezas.h"
#include "freeglut.h"

void Piezas::inicializa() {
	
	for (float i = 1; i < 9; i = i++)
	{
		Peon* aux = new Peon(i, 7);
		peones.agregar(aux);
	}

	for (float i = 1; i < 9; i++)
	{
		Peon* aux = new Peon(i, 2);
		peones.agregar(aux);
	}

	//datos de inicializacion de las torres
	torre1.setDatos(0.25f, 1, 8);
	torre2.setDatos(0.25f, 1, 1);
	torre3.setDatos(0.25f, 8, 8);
	torre4.setDatos(0.25f, 8, 1);


	//datos de incializacion de los reyes
	rey1.setDatos(0.25f, 4, 8);
	rey2.setDatos(0.25f, 4, 1);

	//datos de inicializacion de las damas
	dama1.setDatos(0.25f, 5, 8);
	dama2.setDatos(0.25f, 5, 1);

	// datos de inicializacion de los alfiles
	alfil1.setDatos(0.25f, 3, 8);
	alfil2.setDatos(0.25f, 3, 1);
	alfil3.setDatos(0.25f, 6, 8);
	alfil4.setDatos(0.25f, 6, 1);

	//datos de incializacion de los caballos
	caballo1.setDatos(0.25f, 2, 8);
	caballo2.setDatos(0.25f, 2, 1);
	caballo3.setDatos(0.25f, 7, 8);
	caballo4.setDatos(0.25f, 7, 1);

}

void Piezas::dibuja() {

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

void Piezas::tecla(unsigned char key) {



}

void Piezas::mueve() {

}