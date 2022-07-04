#include "Pieza.h"
#include "freeglut.h"

//Funcion para indicar los datos de las piezas
void Pieza::setDatos(float _r, int _f, int _c) {

	radio = _r;
	fc.setCasillas(_f, _c);
}

//Funcion dibuja para realizar polimorfismo con las distintas piezas
void Pieza::dibuja() {

}