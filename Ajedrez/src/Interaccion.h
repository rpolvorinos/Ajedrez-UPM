#pragma once
#include "Pieza.h"
#include "ListasPiezas.h"

class Interaccion
{
public:
	
	static void moverTorre(Pieza& t, Selector s, int& _turno,int& _o, ListasPiezas& l);
	static void moverAlfil(Pieza& t, Selector s, int& _turno, int& _o, ListasPiezas& l);
	static void moverPeon(Pieza& t, Selector s, int& _turno, int& _o, ListasPiezas& l);
	static void moverCaballo(Pieza& t, Selector s, int& _turno, int& _o, ListasPiezas& l);
	static void moverRey(Pieza& t, Selector s, int& _turno, int& _o, ListasPiezas& l);
	static void moverDama(Pieza& t, Selector s, int& _turno, int& _o, ListasPiezas& l);
	static void moverPieza(Pieza& t, Selector s, int& _turno, int& _o, ListasPiezas& l);
	static bool captura(Pieza t,int _f, int _c);
};