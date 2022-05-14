#pragma once
#include "Torre.h"
#include "Selector.h"
#include "Alfil.h"
#include "Peon.h"
#include "Rey.h"
#include "Dama.h"
#include "Caballo.h"

class Interaccion
{
public:
	static void mov(Torre& t, Selector s, int& _turno);
	static void mov(Alfil& t, Selector s, int& _turno);
	static void mov(Peon& t, Selector s, int& _turno);
	static void mov(Caballo& t, Selector s, int& _turno);
	static void mov(Rey& t, Selector s, int& _turno);
	static void mov(Dama& t, Selector s, int& _turno);
};