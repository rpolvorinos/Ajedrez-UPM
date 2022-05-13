# include "Movimiento.h"

void Movimiento::getFC(int _f, int _c) {

	c_inicial.setCasillas(_f, _c);
}

Casilla Movimiento::vertical(int n) {

	c_final.columna = c_inicial.columna + n;
	c_final.fila = c_inicial.fila;
	return c_final;
}
Casilla Movimiento::horizontal(int n) {

	c_final.fila = c_inicial.fila + n;
	c_final.columna = c_inicial.columna;
	return c_final;
}