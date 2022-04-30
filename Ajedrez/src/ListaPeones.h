#pragma once
#include "Peon.h"
#define MAX_PEONES 16

class ListaPeones
{
private:
	Peon* lista[MAX_PEONES];
	int numero;
public:
	ListaPeones();
	virtual ~ListaPeones() {}
	void dibuja();
	bool agregar(Peon* e);
};

