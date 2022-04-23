#pragma once
#include "peones.h"
#define MAX_PEONES 16

class ListaPeones
{
private:
	Peones* lista[MAX_PEONES];
	int numero;
public:
	ListaPeones();
	virtual ~ListaPeones() {}
	void dibuja();
	bool agregar(Peones* e);
};

