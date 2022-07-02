#pragma once
#include "Vector.h"
#include "Casilla.h"
#include "ETSIDI.h"
#include<iostream>
#include<cstring>


using namespace std;
using ETSIDI::Sprite;

class Pieza
{
protected:
	float radio;
	Vector posicion;
	int estado, color;
	Casilla fc;
	//Declaracion de los diferentes figuras

	Sprite sprite1{ "imagenes/Torre_w.png", 5 };
	Sprite sprite2{ "imagenes/Torre_b.png", 5 };
	Sprite sprite3{ "imagenes/caballo_w.png", 5 };
	Sprite sprite4{ "imagenes/caballo_b.png", 5 };
	Sprite sprite5{ "imagenes/alfil_w.png", 5 };
	Sprite sprite6{ "imagenes/alfil_b.png", 5 };
	Sprite sprite7{ "imagenes/rey_w.png", 5 };
	Sprite sprite8{ "imagenes/rey_b.png", 5 };
	Sprite sprite9{ "imagenes/dama_w.png", 5 };
	Sprite sprite10{ "imagenes/dama_b.png", 5 };
	Sprite sprite11{ "imagenes/peon_w.png", 5 };
	Sprite sprite12{ "imagenes/peon_b.png", 5 };
	
public:
	void setDatos(float _r, int _f, int _c);
	virtual void dibuja();
	virtual int getTipoPieza() {return 0;}
	int getColor() { return color; }
	int getEstado() { return estado; }
	void Increm() { estado++; }
	void Decrem() { estado--; }
	int getfila() { return fc.getF(); }
	int getcolumna() { return fc.getC(); }
	
};

