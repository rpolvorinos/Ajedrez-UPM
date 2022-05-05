#pragma once
#include "Vector.h"

class Tablero {

private:
	unsigned char rojo;
	unsigned char verde;
	unsigned char azul;
	Vector limite1;
	Vector limite2;

public:
	Tablero();
	virtual ~Tablero() {};
	void setColor(unsigned char r, unsigned char v, unsigned char a);
	void cuadradob(float _x, float _y,float tamanio);
	void cuadradon(float _x, float _y, float tamanio);
	void dibuja();
	
};
