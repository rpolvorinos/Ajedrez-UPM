#pragma once
#include "Vector.h"
#include "Casilla.h"
#include "ETSIDI.h"
#include<iostream>
#include<cstring>


using namespace std;

class Pieza
{
protected:
	float radio;
	Vector posicion;
	int estado, color;
	Casilla fc;
	
public:
	void setDatos(float _r, int _f, int _c);
	virtual void dibuja();
	virtual int getTipoPieza() {return 0;}
	int getColor() { return color; }
	friend class Interaccion;
};

