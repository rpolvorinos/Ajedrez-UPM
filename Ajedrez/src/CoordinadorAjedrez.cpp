#include "CoordinadorAjedrez.h"



CoordinadorAjedrez::CoordinadorAjedrez() {

	estado = INICIO;
}

CoordinadorAjedrez::~CoordinadorAjedrez() {

}





void CoordinadorAjedrez::tecla(unsigned char key) {

	if (estado == INICIO) {
		if (key == 'e') {
			mundo.inicializa();
			estado = JUEGO;
		}
		if (key == 's')
			exit(0);
	}

	else if (estado == JUEGO) {
		mundo.tecla(key);
	}


	else if (estado == FIN) {
		if (key == 'c')
			estado = INICIO;
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
		ETSIDI::printxy("Simpsons vs Padre de Familia", -5, 8);
		ETSIDI::setTextColor(1, 1, 1);
		ETSIDI::setFont("fuentes/Bitwise.ttf", 12);
		ETSIDI::printxy("PULSE LA TECLA -E- PARA EMPEZAR", -5, 7);
		ETSIDI::printxy("PULSE LA TECLA -S- PARA SALIR", -5, 6);
		ETSIDI::printxy("Ajedrez UPM", 2, 1);
	}
	else if (estado == JUEGO) {
		mundo.dibuja();
		 fin = mundo.jaqueMate();
		if (fin == 1 || fin == 2)
			estado = FIN;
	}



	else if (estado == FIN) {


		if (fin = 1) {

			ETSIDI::setFont("fuentes/Bitwise.ttf", 16);
			ETSIDI::printxy("FIN de partida", -5, 10);
			ETSIDI::printxy("Han ganado las blancas", -5, 8);
			ETSIDI::printxy("Pulsa -C- para continuar", -5, 6);
		}

		if (fin = 2) {
			ETSIDI::setFont("fuentes/Bitwise.ttf", 16);
			ETSIDI::printxy("FIN de partida", -5, 10);
			ETSIDI::printxy("Han ganado las negras", -5, 8);
			ETSIDI::printxy("Pulsa -C- para continuar", -5, 6);

		}



	}
}





