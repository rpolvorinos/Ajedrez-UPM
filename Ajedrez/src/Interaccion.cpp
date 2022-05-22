#include "Interaccion.h"
#include "Tablero.h"
#include "math.h"

void Interaccion::moverTorre(Pieza& t, Selector s, int& _turno, int& _o, ListasPiezas& l)
{
	if (t.estado == 0 && t.fc.fila == s.fila && t.fc.columna == s.columna && t.color == _turno)
	{
		t.estado++;
		_o = 2;
	}
	else
	{
		if (t.estado == 1 && (s.fila == t.fc.fila || s.columna == t.fc.columna) && t.color == _turno && _turno != _o)
		{
			Pieza* aux = l.colision(s.fila, s.columna, _turno);
			if (aux != 0 && _turno != aux->color)
			{
				l.eliminar(aux);
			}
			if (aux != 0 && _turno == aux->color) {}
			else {

				t.setDatos(0.5, s.getFila(), s.getColumna());
				t.estado--;

				_o = _turno;

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
}

void Interaccion::moverAlfil(Pieza& t, Selector s, int& _turno, int& _o, ListasPiezas& l)
{
	if (t.estado == 0 && t.fc.fila == s.fila && t.fc.columna == s.columna && t.color == _turno)
	{
		t.estado++;
		_o = 2;
	}
	else
	{
		if (t.estado == 1 && (abs(s.fila-t.fc.fila) == abs(s.columna-t.fc.columna)) && t.color == _turno && _turno != _o)
		{
			Pieza* aux = l.colision(s.fila, s.columna, _turno);
			if (aux != 0 && _turno != aux->color)
			{
				l.eliminar(aux);
			}
			if (aux != 0 && _turno == aux->color) {}
			else {
				t.setDatos(0.5, s.getFila(), s.getColumna());
				t.estado--;
				_o = _turno;
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
}

void Interaccion::moverPeon(Pieza& t, Selector s, int& _turno, int& _o, ListasPiezas& l)
{
	if (t.estado == 0 && t.fc.fila == s.fila && t.fc.columna == s.columna && t.color == _turno)
	{
		t.estado++;
		_o = 2;
	}
	else
	{
		if (t.estado == 1 && (abs(s.columna - t.fc.columna)==1) && ((s.fila - t.fc.fila)==0) && t.color == _turno && _turno != _o)
		{
			Pieza* aux = l.colision(s.fila, s.columna, _turno);
			if (aux != 0 && _turno != aux->color)
			{
				l.eliminar(aux);
			}
			if (aux != 0 && _turno == aux->color) {}
			else {
				t.setDatos(0.5, s.getFila(), s.getColumna());
				t.estado--;
				_o = _turno;
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
}

void Interaccion::moverCaballo(Pieza& t, Selector s, int& _turno, int& _o, ListasPiezas& l)
{
	if (t.estado == 0 && t.fc.fila == s.fila && t.fc.columna == s.columna && t.color == _turno)
	{
		t.estado++;
		_o = 2;
	}
	else
	{
		if (t.estado == 1 && ((abs(s.columna - t.fc.columna) == 1&& abs(s.fila - t.fc.fila) == 2)|| (abs(s.columna - t.fc.columna) == 2 && abs(s.fila - t.fc.fila) == 1)) && t.color == _turno && _turno != _o)
		{
			Pieza* aux = l.colision(s.fila, s.columna, _turno);
			if (aux != 0 && _turno != aux->color)
			{
				l.eliminar(aux);
			}

			if (aux!=0 && _turno == aux->color){}
			else {
				t.setDatos(0.5, s.getFila(), s.getColumna());
				t.estado--;
				_o = _turno;
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
}

void Interaccion::moverRey(Pieza& t, Selector s, int& _turno, int& _o, ListasPiezas& l)
{
	if (t.estado == 0 && t.fc.fila == s.fila && t.fc.columna == s.columna && t.color == _turno)
	{
		t.estado++;
		_o = 2;
	}
	else
	{
		if (t.estado == 1 && (abs(s.columna - t.fc.columna) <= 1 && abs(s.fila - t.fc.fila) <= 1) && t.color == _turno && _turno != _o)
		{
			Pieza* aux = l.colision(s.fila, s.columna, _turno);
			if (aux != 0 && _turno != aux->color)
			{
				l.eliminar(aux);
			}
			if (aux != 0 && _turno == aux->color) {}
			else {
				t.setDatos(0.5, s.getFila(), s.getColumna());
				t.estado--;
				_o = _turno;
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
}

void Interaccion::moverDama(Pieza& t, Selector s, int& _turno, int& _o, ListasPiezas& l)
{
	if (t.estado == 0 && t.fc.fila == s.fila && t.fc.columna == s.columna && t.color == _turno)
	{
		t.estado++;
		_o = 2;
	}
	else
	{
		if (t.estado == 1 && (s.fila == t.fc.fila || s.columna == t.fc.columna|| (abs(s.fila - t.fc.fila) == abs(s.columna - t.fc.columna))) && t.color == _turno && _turno != _o)
		{
			Pieza* aux = l.colision(s.fila, s.columna, _turno);
			if (aux != 0 && _turno != aux->color)
			{
				l.eliminar(aux);
			}
			if (aux != 0 && _turno == aux->color) {}
			else {
				t.setDatos(0.5, s.getFila(), s.getColumna());
				t.estado--;
				_o = _turno;
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
}


void Interaccion::moverPieza(Pieza& t, Selector s, int& _turno, int& _o, ListasPiezas& l) {

	int tipoPieza;
	tipoPieza = t.getTipoPieza();

	switch (tipoPieza) {
		case 1: {	//Torres
			Interaccion::moverTorre(t, s, _turno, _o,l);
			break;
		}
		case 2: {	//Caballos
			Interaccion::moverCaballo(t, s, _turno, _o,l);
			break;
		}
		case 3: {	//Alfiles
			Interaccion::moverAlfil(t, s, _turno, _o, l);
			break;
		}
		case 4: {	//Damas
			Interaccion::moverDama(t, s, _turno, _o, l);
			break;
		}
		case 5: {	//Reyes
			Interaccion::moverRey(t, s, _turno, _o, l);
			break;
		}
		case 6: {	//Peones
			Interaccion::moverPeon(t, s, _turno, _o, l);
			break;
		}
	}
}

bool Interaccion::captura(Pieza t, int _f, int _c)
{
	if (t.fc.fila == _f && t.fc.columna == _c)
		return true;
	return false;
}