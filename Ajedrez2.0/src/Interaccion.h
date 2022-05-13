#pragma once
#include "Listapiezas.h"
#include "Selector.h"
#include "Casilla.h"
#include "Piezas.h"
#include "Tablero.h"

class Interaccion
{
	
public:
	//Interacciones de la torre
	static int set(Torre& t, Selector s, int e);
	static int pos(Torre& t, Selector s, int e, Casilla ca);

	//Interacciones del alfil
	static int set(Alfil& a, Selector s, int e);
	static int pos(Alfil& a, Selector s, int e, Casilla ca);

	//Interacciones del rey
	static int set(Rey& r, Selector s, int e);
	static int pos(Rey& r, Selector s, int e, Casilla ca);

	//Interaccion de la dama
	static int set(Dama& d, Selector s, int e);
	static int pos(Dama& d, Selector s, int e, Casilla ca);

	//Interracion del caballo
	static int set(Caballo& c, Selector s, int e);
	static int pos(Caballo& c, Selector s, int e, Casilla ca);

	//Interaccion del peon
	static int set(Peon& p, Selector s, int e);
	static int pos(Peon& p, Selector s, int e, Casilla ca);

	static Casilla store(Selector s);

};

