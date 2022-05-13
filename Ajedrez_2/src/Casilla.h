#pragma once

class Casilla
{
	friend class Tablero;
	friend class Movimiento;
	friend class Torre;
	friend class Alfil;
	friend class  Peon;
	friend class Rey;
	friend class Dama;
	friend class Caballo;
	friend class Piezas;
	friend class Selector;
	friend class Interaccion;

private:
	int fila, columna;
	unsigned char rojo;
	unsigned char verde;
	unsigned char azul;

public:
	Casilla();
	void setCasillas(int f, int c);
	void setColor(unsigned char r, unsigned char v, unsigned char a);
	void cuadrado(float _x, float _y, float tamanio);


};