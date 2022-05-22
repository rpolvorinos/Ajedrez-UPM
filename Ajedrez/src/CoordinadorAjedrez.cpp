#include "CoordinadorAjedrez.h"


CoordinadorAjedrez::CoordinadorAjedrez() {

	estado = INICIO;
	sprite1.setCenter(0, 0);
	sprite1.setSize(12,7);
	sprite2.setCenter(0, 0);
	sprite2.setSize(12, 7);
	sprite3.setCenter(0, 0);
	sprite3.setSize(12, 7);
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

	else if (estado == GAMEOVER) {
		if (key == 'c' || key == 'C')
			estado = INICIO;
	}

	else if (estado == FIN) {
		if (key == 'c' || key == 'C')
		{
			estado = INICIO;
			fin = 0;
		}
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
		sprite1.draw();
		glPopMatrix();
		
	}
	else if (estado == JUEGO) {
		mundo.dibuja();
		fin = mundo.jaqueMate();
		if (fin == 1 || fin == 2)
			estado = FIN;
	}

	else if (estado == FIN) {

		if (fin == 1)
		{
			gluLookAt(0, 7.5, 30, // posicion del ojo
				0.0, 7.5, 0.0, // hacia que punto mira (0,7.5,0)
				0.0, 1.0, 0.0); // definimos hacia arriba (eje Y)
			ETSIDI::setFont("fuentes/Bitwise.ttf", 16);
			ETSIDI::printxy("Gana Padre de Famailia", -5, 12);
			ETSIDI::printxy("Pulsa -C- para continuar", -5, 0);
			//fin = 0;
			glPushMatrix();
			glTranslatef(-11, 2, -2);
			glColor3f(1.0f, 0.0f, 0.0f);
			sprite3.draw();
			glPopMatrix();
		}
		else
		{
			if (fin == 2)
			{
				gluLookAt(0, 7.5, 30, // posicion del ojo
					0.0, 7.5, 0.0, // hacia que punto mira (0,7.5,0)
					0.0, 1.0, 0.0); // definimos hacia arriba (eje Y)
				ETSIDI::setFont("fuentes/Bitwise.ttf", 16);
				ETSIDI::printxy("Ganan Los Simpsons", -5, 12);
				ETSIDI::printxy("Pulsa -C- para continuar", -5, 0);
				//fin = 0;
				glPushMatrix();
				glTranslatef(-11, 2, -2);
				glColor3f(1.0f, 0.0f, 0.0f);
				sprite2.draw();
				glPopMatrix();
			}
		}
	}

}





