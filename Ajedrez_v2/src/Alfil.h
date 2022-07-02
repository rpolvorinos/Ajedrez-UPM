#pragma once
#include "Vector.h"
#include "ETSIDI.h"
#include "Casilla.h"
#include "Pieza.h"
#include<iostream>
#include<cstring>

using namespace std;

using ETSIDI::Sprite;

class Alfil: public Pieza {
public:
	Alfil();
	Alfil(int _f, int _c, int _color);
	virtual ~Alfil() {};
	void dibuja();
	int getTipoPieza();


};
