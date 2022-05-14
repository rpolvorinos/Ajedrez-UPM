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
	static void mov(Torre& t, Selector s);
	static void mov(Alfil& t, Selector s);
	static void mov(Peon& t, Selector s);
	static void mov(Caballo& t, Selector s);
	static void mov(Rey& t, Selector s);
	static void mov(Dama& t, Selector s);
};

