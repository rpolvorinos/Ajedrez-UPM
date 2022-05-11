#include "Interaccion.h"
#include "Tablero.h"

void Interaccion::mov(Torre& t, Selector s)
{
	if (t.estado == 0 && t.fc.fila == s.fila && t.fc.columna == s.columna)
	{
		t.estado++;
	}
	else
	{
		if (t.estado == 1)
		{
			t.setDatos(0.5, s.getFila(), s.getColumna());
			t.estado--;
		}
	}
}