#pragma once
#include "Dama.h"
#define MAX_DAMAS 2

class ListaDamas {
private:
	Dama* lista[MAX_DAMAS];
	int numero;
public:
	ListaDamas();
	virtual ~ListaDamas() {}
	void dibuja();
	bool agregar(Dama* t);
	int getNumero() { return numero; }

	//void destruirContenido();
	//void eliminar(int index);
	//void eliminar(Esfera* e);

	friend class Interaccion;
};