#pragma once
#include "Peon.h"
#include "Torre.h"
#include "Rey.h"
#include "Dama.h"
#include "Alfil.h"
#include "Caballo.h"

#define MAX_PEONES 16
#define MAX_TORRES 4
#define MAX_REYES 2
#define MAX_DAMAS 2
#define MAX_ALFILES 4
#define MAX_CABALLOS 4
class Listapiezas {
private:
	Peon* lista1[MAX_PEONES];
	Torre* lista2[MAX_TORRES];
	Rey* lista3[MAX_REYES];
	Dama* lista4[MAX_DAMAS];
	Alfil* lista5[MAX_ALFILES];
	Caballo* lista6[MAX_CABALLOS];
	int numero1, numero2, numero3, numero4, numero5, numero6;
public:
	Listapiezas();
	virtual ~Listapiezas() {}
	void dibuja();
	bool agregar(Peon* e);
	bool agregar(Torre* e);
	bool agregar(Rey* e);
	bool agregar(Dama* e);
	bool agregar(Alfil* e);
	bool agregar(Caballo* e);

};