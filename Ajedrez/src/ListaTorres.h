#pragma once
#include "Torre.h"
#define MAX_TORRES 4

class ListaTorres {
private:
	Torre* lista[MAX_TORRES];
	int numero;
public:
	ListaTorres();
	virtual ~ListaTorres() {}
	void dibuja();
	bool agregar(Torre* t);
	int getNumero() { return numero; }

	//void destruirContenido();
	//void eliminar(int index);
	//void eliminar(Esfera* e);

	friend class Interaccion;
};