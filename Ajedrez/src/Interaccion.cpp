#include "Interaccion.h"
#include "Tablero.h"
#include "math.h"

void Interaccion::mov(Torre& t, Selector s,int& _turno)
{
	if (t.estado == 0 && t.fc.fila == s.fila && t.fc.columna == s.columna && t.color==_turno)
	{
		t.estado++;
	}
	else
	{
		if (t.estado == 1 && (s.fila==t.fc.fila || s.columna==t.fc.columna) && t.color==_turno)
		{
			t.setDatos(0.5, s.getFila(), s.getColumna());
			t.estado--;
			
			switch (_turno)
			{
			case 0:
				_turno = 1;
				break;
			case 1:
				_turno = 0;
				break;
			}
		}
	}
}

void Interaccion::mov(Alfil& t, Selector s, int& _turno)
{
	if (t.estado == 0 && t.fc.fila == s.fila && t.fc.columna == s.columna && t.color == _turno)
	{
		t.estado++;
	}
	else
	{
		if (t.estado == 1 && (abs(s.fila-t.fc.fila) == abs(s.columna-t.fc.columna)) && t.color == _turno)
		{
			t.setDatos(0.5, s.getFila(), s.getColumna());
			t.estado--;

			switch (_turno)
			{
			case 0:
				_turno = 1;
				break;
			case 1:
				_turno = 0;
				break;
			}
		}
	}
}

void Interaccion::mov(Peon& t, Selector s, int& _turno)
{
	if (t.estado == 0 && t.fc.fila == s.fila && t.fc.columna == s.columna && t.color == _turno)
	{
		t.estado++;
	}
	else
	{
		if (t.estado == 1 && (abs(s.columna - t.fc.columna)==1) && ((s.fila - t.fc.fila)==0) && t.color == _turno)
		{
			t.setDatos(0.5, s.getFila(), s.getColumna());
			t.estado--;

			switch (_turno)
			{
			case 0:
				_turno = 1;
				break;
			case 1:
				_turno = 0;
				break;
			}
		}
	}
}

void Interaccion::mov(Caballo& t, Selector s, int& _turno)
{
	if (t.estado == 0 && t.fc.fila == s.fila && t.fc.columna == s.columna && t.color == _turno)
	{
		t.estado++;
	}
	else
	{
		if (t.estado == 1 && ((abs(s.columna - t.fc.columna) == 1&& abs(s.fila - t.fc.fila) == 2)|| (abs(s.columna - t.fc.columna) == 2 && abs(s.fila - t.fc.fila) == 1)) && t.color == _turno)
		{
			t.setDatos(0.5, s.getFila(), s.getColumna());
			t.estado--;

			switch (_turno)
			{
			case 0:
				_turno = 1;
				break;
			case 1:
				_turno = 0;
				break;
			}
		}
	}
}

