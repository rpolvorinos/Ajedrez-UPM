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
		0.0, 0.0, 0.0,    // hacia que punto mira  (0,0,0) 
		0.0, 0.0, 1.0);      // definimos hacia arriba (eje Z)    

//aqui es donde hay que poner el codigo de dibujo
// 
//Dibujo del tablero

	tablero.dibuja(); //se dibuja el tablero
	piezas.dibuja(); //se dibujan todas las piezas

}

void Mundo::mueve()
{
	//piezas.mueve();
}

void Mundo::inicializa()
{
	x_ojo = 0.0;
	y_ojo = -0.01;
	z_ojo = 23;
	estado = 0;
	piezas.inicializa(); //inicializacion de los datos de las diferentes piezas
	tablero.selector.inicializa();
}

void Mundo::tecla(unsigned char key)
{
	tablero.selector.mover(key);
	//piezas.tecla(key);

	switch (key) {

	case 13:



		do {
			//Seleccion de los peones
			for (int i = 0; i < 16; i++) {
				if (estado == 0)
				{
					estado = Interaccion::set(*piezas.p.lista1[i], tablero.selector, estado);
					c_i = Interaccion::store(tablero.selector);
					n = i;

				}
			}

			//Seleccion de las torres
			for (int i = 0; i < 4; i++) {
				if (estado == 0)
				{
					estado = Interaccion::set(*piezas.p.lista2[i], tablero.selector, estado);
					c_i = Interaccion::store(tablero.selector);
					n = i;
				}
			}
			//Seleccion de los reyes
			for (int i = 0; i < 2; i++) {
				if (estado == 0)
				{
					estado = Interaccion::set(*piezas.p.lista3[i], tablero.selector, estado);
					c_i = Interaccion::store(tablero.selector);
					n = i;
				}
			}

			//Selecion de las damas
			for (int i = 0; i < 2; i++) {
				if (estado == 0)
				{
					estado = Interaccion::set(*piezas.p.lista4[i], tablero.selector, estado);
					c_i = Interaccion::store(tablero.selector);
					n = i;
				}
			}
			//Seleccion de los alfiles
			for (int i = 0; i < 4; i++) {
				if (estado == 0)
				{
					estado = Interaccion::set(*piezas.p.lista5[i], tablero.selector, estado);
					c_i = Interaccion::store(tablero.selector);
					n = i;
				}
			}

			//Seleccion de caballos
			for (int i = 0; i < 4; i++) {
				if (estado == 0)
				{
					estado = Interaccion::set(*piezas.p.lista5[i], tablero.selector, estado);
					c_i = Interaccion::store(tablero.selector);
					n = i;
				}
			}
		} while (estado == 0);

		break;
	case ' ':

		//Movimiento de los peones
		estado = Interaccion::pos(*piezas.p.lista1[n], tablero.selector, estado, c_i);

		//Movimiento de las torres
		estado = Interaccion::pos(*piezas.p.lista2[n], tablero.selector, estado, c_i);

		//Movimiento de los reyes
		estado = Interaccion::pos(*piezas.p.lista3[n], tablero.selector, estado, c_i);

		//Movimiento de las damas
		estado = Interaccion::pos(*piezas.p.lista4[n], tablero.selector, estado, c_i);

		//Movimiento de los alfiles
		estado = Interaccion::pos(*piezas.p.lista5[n], tablero.selector, estado, c_i);

		//Movimiento de los caballos
		estado = Interaccion::pos(*piezas.p.lista6[n], tablero.selector, estado, c_i);
		break;
	}
}
