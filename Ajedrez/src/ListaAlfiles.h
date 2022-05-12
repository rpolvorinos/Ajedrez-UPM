#pragma once
#include "Alfil.h"
#define MAX_ALFILES 4
#include "Selector.h"

class ListaAlfiles {
private:
	Alfil* lista[MAX_ALFILES];
	int numero;
public:
	ListaAlfiles();
	virtual ~ListaAlfiles() {}
	void dibuja();
	bool agregar(Alfil* t);
	int getNumero() { return numero; }
	void mover(Selector s);
	//void destruirContenido();
	//void eliminar(int index);
	//void eliminar(Esfera* e);

	friend class Interaccion;
};