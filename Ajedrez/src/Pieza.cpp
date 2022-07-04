#include "Pieza.h"
#include "freeglut.h"

//Funcion para indicar los datos de las piezas
void Pieza::setDatos(float _r, int _f, int _c) {

	radio = _r;
	fc.setCasillas(_f, _c);
}

//Funcion para realizar el polimorfismo y realizar la funcion dibuja de cada una de las piezas
void Pieza::dibuja() {

}