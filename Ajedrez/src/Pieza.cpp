#include "Pieza.h"
#include "freeglut.h"

//Funcion para indicar los datos a las piezas
void Pieza::setDatos(float _r, int _f, int _c) {

	radio = _r;
	fc.setCasillas(_f, _c);
}

//Funcion para realizar el polimorfismo con las funciones de dibuja de las distintas piezas
void Pieza::dibuja() {

}