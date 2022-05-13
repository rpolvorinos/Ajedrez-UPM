#pragma once
#include "Torre.h"
#include "Selector.h"
#include "Alfil.h"
#include "Peon.h"

class Interaccion
{
public:
	static void mov(Torre& t, Selector s);
	static void mov(Alfil& t, Selector s);
	static void mov(Peon& t, Selector s);
};

