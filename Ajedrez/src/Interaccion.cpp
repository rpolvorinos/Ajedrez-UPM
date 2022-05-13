#include "Interaccion.h"
#include "Tablero.h"
#include "math.h"

void Interaccion::mov(Torre& t, Selector s)
{
	if (t.estado == 0 && t.fc.fila == s.fila && t.fc.columna == s.columna)
	{
		t.estado++;
	}
	else
	{
		if (t.estado == 1 && (s.fila==t.fc.fila || s.columna==t.fc.columna))
		{
			t.setDatos(0.5, s.getFila(), s.getColumna());
			t.estado--;
		}
	}
}

void Interaccion::mov(Alfil& t, Selector s)
{
	if (t.estado == 0 && t.fc.fila == s.fila && t.fc.columna == s.columna)
	{
		t.estado++;
	}
	else
	{
		if (t.estado == 1 && (abs(s.fila-t.fc.fila) == abs(s.columna-t.fc.columna)))
		{
			t.setDatos(0.5, s.getFila(), s.getColumna());
			t.estado--;
		}
	}
}

void Interaccion::mov(Peon& t, Selector s)
{
	if (t.estado == 0 && t.fc.fila == s.fila && t.fc.columna == s.columna)
	{
		t.estado++;
	}
	else
	{
		if (t.estado == 1 && (abs(s.columna - t.fc.columna)==1) && ((s.fila - t.fc.fila)==0) )
		{
			t.setDatos(0.5, s.getFila(), s.getColumna());
			t.estado--;
		}
	}
}