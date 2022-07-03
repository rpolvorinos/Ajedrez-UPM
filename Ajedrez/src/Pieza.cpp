#include "Pieza.h"
#include "freeglut.h"

void Pieza::setDatos(float _r, int _f, int _c) {

	radio = _r;
	fc.setCasillas(_f, _c);
}

void Pieza::dibuja() {

}