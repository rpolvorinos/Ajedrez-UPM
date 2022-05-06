#include "piezas.h"
#include "freeglut.h"

void piezas::inicializa() {
	
	torreb.setPos(posicion.x, posicion.y);

}

void piezas::dibuja() {

	glPushMatrix();
	glTranslatef(posicion.x, posicion.y, 0.5);
	glColor3f(1.0f, 0.0f, 0.0f);
	torrew.draw();
	torreb.draw();
	glPopMatrix();
}


void piezas::setDatos(float _r, int _f, int _c) {

	radio = _r;
	posicion.x= posf[_f];
	posicion.y = posc[_c];
}
