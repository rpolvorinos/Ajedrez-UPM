#include "Interaccion.h"
#include "math.h"


void Interaccion::moverPieza(Pieza& t, Selector s, int& _turno, int& _o, ListasPiezas& l)
{
	if (t.getEstado() == 0 && t.getfila() == s.getFila() && t.getcolumna() == s.getColumna() && t.getColor() == _turno)
	{
		t.Increm();
		_o = 2;
	}
	else
	{
		{
			Pieza* aux = l.colision(s.getFila(), s.getColumna(), _turno);
			if (aux != 0 && _turno != aux->getColor())
			{
				l.eliminar(aux);
			}
			if (aux != 0 && _turno == aux->getColor()) {}
			else {
				t.setDatos(0.5, s.getFila(), s.getColumna());
				t.Decrem();
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

bool Interaccion::condicion(Pieza& t, Selector s, int& _turno, int& _o, ListasPiezas& l)
{
	switch (t.getTipoPieza())
	{
	case 1:
		if (t.getEstado() == 1 && (s.getFila() == t.getfila() || s.getFila() == t.getcolumna()) && t.getColor() == _turno && _turno != _o) //Movimiento de las torres blancas y negras
			return true;
		break;

	case 2:
		if (t.getEstado() == 1 && ((abs(s.getColumna() - t.getcolumna()) == 1 && abs(s.getFila() - t.getfila()) == 2) || (abs(s.getColumna() - t.getcolumna()) == 2 && abs(s.getFila() - t.getfila()) == 1)) && t.getColor() == _turno && _turno != _o) //Movimiento de los caballos blancos y negros
		return true;
		break;

	case 3:
		if (t.getEstado() == 1 && (abs(s.getFila() - t.getfila()) == abs(s.getColumna() - t.getcolumna())) && t.getColor() == _turno && _turno != _o) //Movimiento de los alfiles blancos y negros
		return true;
		break;

	case 4:
		if (t.getEstado() == 1 && (s.getFila() == t.getfila() || s.getColumna() == t.getcolumna()|| (abs(s.getFila() - t.getfila()) == abs(s.getColumna() - t.getcolumna()))) && t.getColor() == _turno && _turno != _o)	//Movimiento de las damas blancas y negras
		return true;
		break;

	case 5:
		if (t.getEstado() == 1 && (abs(s.getColumna() - t.getcolumna()) <= 1 && abs(s.getFila() - t.getfila()) <= 1) && t.getColor() == _turno && _turno != _o)	//movimiento de los reyes blanco y negro
		return true;
		break;
	
	case 6:
		if (t.getColor() == 0 && t.getEstado() == 1 && ((s.getColumna() - t.getcolumna()) == 1) && ((s.getFila() - t.getfila()) == 0) && t.getColor() == _turno && _turno != _o) //Movimiento peones blancos
			return true;
		if (t.getColor() == 1 && t.getEstado() == 1 && ((t.getcolumna() - s.getColumna()) == 1) && ((s.getFila() - t.getfila()) == 0) && t.getColor() == _turno && _turno != _o) //Movimiento peones negros
			return true;
		break;
	}

	return false;
}


bool Interaccion::captura(Pieza t, int _f, int _c)
{
	if (t.getfila() == _f && t.getcolumna() == _c)
		return true;
	return false;
}