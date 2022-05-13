#include "Interaccion.h"


int Interaccion::set(Torre& t, Selector s, int e)
{

	if (e == 0 && t.fc.fila == s.fila && t.fc.columna == s.columna) 
		e++;
	return e;

}

int Interaccion::pos(Torre& t, Selector s, int e, Casilla ca) {

	if (e == 1 && t.fc.fila==ca.fila && t.fc.columna==ca.columna)
	{
		t.movimiento(s.fila, s.columna);
		e--;
	}
	return e;
}

int Interaccion::set(Alfil& a, Selector s, int e)
{

	if (e == 0 && a.fc.fila == s.fila && a.fc.columna == s.columna)
		e++;
	return e;

}

int Interaccion::pos(Alfil& a, Selector s, int e, Casilla ca) {

	if (e == 1 && a.fc.fila == ca.fila && a.fc.columna == ca.columna)
	{
		a.movimiento(s.fila, s.columna);
		e--;
	}
	return e;
}
int Interaccion::set(Rey& r, Selector s, int e)
{

	if (e == 0 && r.fc.fila == s.fila && r.fc.columna == s.columna) 
		e++;
	return e;

}

int Interaccion::pos(Rey& r, Selector s, int e, Casilla ca) {

	if (e == 1 && r.fc.fila == ca.fila && r.fc.columna == ca.columna)
	{
		r.movimiento(s.fila, s.columna);
		e--;
	}
	return e;
}
int Interaccion::set(Dama& d, Selector s, int e)
{

	if (e == 0 && d.fc.fila == s.fila && d.fc.columna == s.columna) 
		e++;
	return e;

}

int Interaccion::pos(Dama& d, Selector s, int e, Casilla ca) {

	if (e == 1 && d.fc.fila == ca.fila && d.fc.columna == ca.columna)
	{
		d.movimiento(s.fila, s.columna);
		e--;
	}
	return e;
}
int Interaccion::set(Caballo& c, Selector s, int e)
{

	if (e == 0 && c.fc.fila == s.fila && c.fc.columna == s.columna) 
		e++;
	return e;

}

int Interaccion::pos(Caballo& c, Selector s, int e, Casilla ca) {

	if (e == 1 && c.fc.fila == ca.fila && c.fc.columna == ca.columna)
	{
		c.movimiento(s.fila, s.columna);
		e--;
	}
	return e;
}
int Interaccion::set(Peon& p, Selector s, int e)
{

	if (e == 0 && p.fc.fila == s.fila && p.fc.columna == s.columna) 
		e++;
	return e;

}

int Interaccion::pos(Peon& p, Selector s, int e, Casilla ca) {

	if (e == 1 && p.fc.fila == ca.fila && p.fc.columna == ca.columna)
	{
		p.movimiento(s.fila, s.columna);
		e--;
	}
	return e;
}
Casilla Interaccion::store(Selector s) {
	Casilla ca;
	ca.setCasillas(s.fila, s.columna);
	return ca;
}