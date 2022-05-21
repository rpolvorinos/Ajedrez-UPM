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
	static void mov(Torre& t, Selector s, int& _turno,int& _o);
	static void mov(Alfil& t, Selector s, int& _turno, int& _o);
	static void mov(Peon& t, Selector s, int& _turno, int& _o);
	static void mov(Caballo& t, Selector s, int& _turno, int& _o);
	static void mov(Rey& t, Selector s, int& _turno, int& _o);
	static void mov(Dama& t, Selector s, int& _turno, int& _o);
};