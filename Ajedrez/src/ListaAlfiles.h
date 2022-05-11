#pragma once
#include "Alfil.h"
#define MAX_ALFILES 4

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

	//void destruirContenido();
	//void eliminar(int index);
	//void eliminar(Esfera* e);

	friend class Interaccion;
};