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
	static void mov(Torre& t, Selector s, int& _turno,int& _o);
	static void mov(Alfil& t, Selector s, int& _turno, int& _o);
	static void mov(Peon& t, Selector s, int& _turno, int& _o);
	static void mov(Caballo& t, Selector s, int& _turno, int& _o);
	static void mov(Rey& t, Selector s, int& _turno, int& _o);
	static void mov(Dama& t, Selector s, int& _turno, int& _o);
	static void mov(Pieza& t, Selector s, int& _turno, int& _o);
};