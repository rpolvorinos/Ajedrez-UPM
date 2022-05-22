#pragma once

class Selector
{
private:
	int fila, columna;
public:
	Selector();
	void inicializa();
	void mover(unsigned char key);
	int getFila();
	int getColumna();
	friend class Tablero;
	friend class Interaccion;
};
