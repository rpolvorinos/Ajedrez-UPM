#pragma once

class Casilla
{
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
	int getF() { return fila; }
	int getC() { return columna; }
	
	
};
