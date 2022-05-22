#pragma once
#include "Torre.h"
#include "Alfil.h"
#include "Peon.h"
#include "Rey.h"
#include "Dama.h"
#include "Caballo.h"
#include "Pieza.h"
#include "ListasPiezas.h"
#include "Selector.h"
#include "Mundo.h"


class Interaccion
{
public:
	
	static void moverTorre(Pieza& t, Selector s, int& _turno,int& _o);
	static void moverAlfil(Pieza& t, Selector s, int& _turno, int& _o);
	static void moverPeon(Pieza& t, Selector s, int& _turno, int& _o);
	static void moverCaballo(Pieza& t, Selector s, int& _turno, int& _o);
	static void moverRey(Pieza& t, Selector s, int& _turno, int& _o);
	static void moverDama(Pieza& t, Selector s, int& _turno, int& _o);
	static void moverPieza(Pieza& t, Selector s, int& _turno, int& _o);

};