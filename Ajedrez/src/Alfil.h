#pragma once
#include "Vector.h"
#include "ETSIDI.h"
using ETSIDI::Sprite;

class Alfil {
private:
	Sprite sprite1{ "imagenes/alfil_w.png", 5 };
	Sprite sprite2{ "imagenes/alfil_b.png", 5 };
	float radio;
	Vector posicion;


public:
	Alfil();
	virtual ~Alfil() {};
	void dibujaw();
	void dibujab();
	void setDatos(float _r, float _x, float _y);



};