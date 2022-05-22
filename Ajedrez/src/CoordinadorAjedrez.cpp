#include "CoordinadorAjedrez.h"


CoordinadorAjedrez::CoordinadorAjedrez() {

	estado = INICIO;
	
}

CoordinadorAjedrez::~CoordinadorAjedrez() {

}





void CoordinadorAjedrez::tecla(unsigned char key) {

	if (estado == INICIO) {
		if (key == 'e' || key == 'E') {
			mundo.inicializa();
			estado = JUEGO;

		}
		if (key == 's' || key == 'S')
			exit(0);
	}

	else if (estado == JUEGO) {
		mundo.tecla(key);
	}
	else if (estado == GanaW)
	{
		if (key == 's' || key == 'S')
		exit(0);
	}
	else if (estado ==GanaB) {
		if (key == 's' || key == 'S')
		exit(0);
	}

}

void CoordinadorAjedrez::dibuja() {

	if (estado == INICIO)
	{//CODIGO PARA PINTAR UNA PANTALLA NEGRA CON LETRAS
		gluLookAt(0, 7.5, 30, // posicion del ojo
			0.0, 7.5, 0.0, // hacia que punto mira (0,7.5,0)
			0.0, 1.0, 0.0); // definimos hacia arriba (eje Y)
		ETSIDI::setTextColor(1, 1, 0);
		ETSIDI::setFont("fuentes/Bitwise.ttf", 16);
		ETSIDI::printxy("Simpsons vs Padre de Familia", -5, 12);
		ETSIDI::setTextColor(1, 1, 1);
		ETSIDI::setFont("fuentes/Bitwise.ttf", 12);
		ETSIDI::printxy("PULSE LA TECLA -E- PARA EMPEZAR", -5, 11);
		ETSIDI::printxy("PULSE LA TECLA -S- PARA SALIR", -5, 10);
		ETSIDI::printxy("Ajedrez UPM", -1, -1);

		glPushMatrix();
		glTranslatef(-10,1, 0.5);
		glColor3f(1.0f, 0.0f, 0.0f);
		glPopMatrix();
		
	}
	else if (estado == JUEGO) {
		mundo.dibuja();
		fin = mundo.jaqueMate();
		if (fin == 1)
			estado = GanaW;
		else if (fin == 2)
			estado = GanaB;
	}
		

	else if (estado == GanaW) {


			gluLookAt(0, 7.5, 30, // posicion del ojo
				0.0, 7.5, 0.0, // hacia que punto mira (0,7.5,0)
				0.0, 1.0, 0.0); // definimos hacia arriba (eje Y)
			ETSIDI::setTextColor(1, 1, 0);
			ETSIDI::setFont("fuentes/Bitwise.ttf", 16);
			ETSIDI::printxy("Gana Padre de Familia", -5, 8);
			ETSIDI::printxy("Pulsa -S- para finalizar", -5,4);
			
		}
		else if (fin == GanaB) {
			gluLookAt(0, 7.5, 30, // posicion del ojo
				0.0, 7.5, 0.0, // hacia que punto mira (0,7.5,0)
				0.0, 1.0, 0.0); // definimos hacia arriba (eje Y)
			ETSIDI::setTextColor(1, 1, 0);
			ETSIDI::setFont("fuentes/Bitwise.ttf", 16);
			ETSIDI::printxy("Gana Los Simpsons", -5, 8);
			ETSIDI::printxy("Pulsa -S- para finalizar", -5, 4);
		
		}
	}






