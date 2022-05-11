#pragma once
#include "Caballo.h"
#define MAX_CABALLOS 4

class ListaCaballos {
private:
	Caballo* lista[MAX_CABALLOS];
	int numero;
public:
	ListaCaballos();
	virtual ~ListaCaballos() {}
	void dibuja();
	bool agregar(Caballo* t);
	int getNumero() { return numero; }

	//void destruirContenido();
	//void eliminar(int index);
	//void eliminar(Esfera* e);

	friend class Interaccion;
};