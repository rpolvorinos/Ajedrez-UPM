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
		if (t.getEstado() == 1 && (s.getFila() == t.getfila() || s.getFila() == t.getcolumna()) && t.getColor() == _turno && _turno != _o)	//movimento de la torre blanca y negra
			return true;
		break;

	case 2:
		if (t.getEstado() == 1 && ((abs(s.getColumna() - t.getcolumna()) == 1 && abs(s.getFila() - t.getfila()) == 2) || (abs(s.getColumna() - t.getcolumna()) == 2 && abs(s.getFila() - t.getfila()) == 1)) && t.getColor() == _turno && _turno != _o)	// movimiento del caballo blanco y negro 
		return true;
		break;

	case 3:
		if (t.getEstado() == 1 && (abs(s.getFila() - t.getfila()) == abs(s.getColumna() - t.getcolumna())) && t.getColor() == _turno && _turno != _o)	//movimiento del alfil blanco y negro
		return true;
		break;

	case 4:
		if (t.getEstado() == 1 && (s.getFila() == t.getfila() || s.getColumna() == t.getcolumna()|| (abs(s.getFila() - t.getfila()) == abs(s.getColumna() - t.getcolumna()))) && t.getColor() == _turno && _turno != _o)	//movimiento de la dama blanca y negra
		return true;
		break;

	case 5:
		if (t.getEstado() == 1 && (abs(s.getColumna() - t.getcolumna()) <= 1 && abs(s.getFila() - t.getfila()) <= 1) && t.getColor() == _turno && _turno != _o)	//movimiento del rey blanco y negro
		return true;
		break;
	
	case 6:
		if (t.getColor() == 0 && t.getEstado() == 1 && ((s.getColumna() - t.getcolumna()) == 1) && ((s.getFila() - t.getfila()) == 0) && t.getColor() == _turno && _turno != _o) //Movimiento peones blancos
			return true;
		else if (t.getColor() == 1 && t.getEstado() == 1 && ((t.getcolumna() - s.getColumna()) == 1) && ((s.getFila() - t.getfila()) == 0) && t.getColor() == _turno && _turno != _o) //Movimiento peones negros
			return true;
		break;
	}

	return false;
}

/*
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
}*/

bool Interaccion::captura(Pieza t, int _f, int _c)
{
	if (t.getfila() == _f && t.getcolumna() == _c)
		return true;
	return false;
}