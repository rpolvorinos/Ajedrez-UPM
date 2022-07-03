#pragma once
#include "Pieza.h"
#include "ListasPiezas.h"

class Interaccion
{
public:

	static void moverPieza(Pieza& t, Selector s, int& _turno, int& _o, ListasPiezas& l);
	static bool captura(Pieza t,int _f, int _c);
	static bool condicion(Pieza& t, Selector s, int& _turno, int& _o);
};