#include "Mundo.h"
#include "freeglut.h"
#include <math.h>
#include "ETSIDI.h"

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
	piezas.dibuja(); //se dibujan todas las piezas
	
}

void Mundo::mueve()
{

}

void Mundo::inicializa()
{
	x_ojo = 0.0;
	y_ojo = -0.01;
	z_ojo = 23;

	piezas.inicializa(); //inicializacion de los datos de las diferentes piezas
	tablero.selector.inicializa();

}

void Mundo::tecla(unsigned char key)
{
	tablero.selector.mover(key);

	//piezas.tecla(key);

	switch (key) {
	case 'q':
		piezas.torre1.setDatos(0.5,tablero.selector.getFila(), tablero.selector.getColumna());
	}
}