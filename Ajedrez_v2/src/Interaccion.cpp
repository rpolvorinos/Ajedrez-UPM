#include "Interaccion.h"
#include "math.h"


void Interaccion::moverPieza(Pieza& t, Selector s, int& _turno, int& _o, ListasPiezas& l)
{
	if (t.estado == 0 && t.fc.getF() == s.getFila() && t.fc.getC() == s.getColumna() && t.color == _turno)
	{
		t.estado++;
		_o = 2;
	}
	else
	{
		//if (t.estado == 1 && (s.getFila() == t.fc.getF() || s.getColumna() == t.fc.getC()|| (abs(s.getFila() - t.fc.getF()) == abs(s.getColumna() - t.fc.getC()))) && t.color == _turno && _turno != _o)
		if(condicion(t,s,_turno,_o,l))
		{
			Pieza* aux = l.colision(s.getFila(), s.getColumna(), _turno);
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

bool Interaccion::condicion(Pieza& t, Selector s, int& _turno, int& _o, ListasPiezas& l)
{
	switch (t.getTipoPieza())
	{
	case 1:
		if (t.estado == 1 && (s.getFila() == t.fc.getF() || s.getFila() == t.fc.getC()) && t.color == _turno && _turno != _o)
			return true;
		break;

	case 2:
		if (t.estado == 1 && ((abs(s.getColumna() - t.fc.getC()) == 1 && abs(s.getFila() - t.fc.getF()) == 2) || (abs(s.getColumna() - t.fc.getC()) == 2 && abs(s.getFila() - t.fc.getF()) == 1)) && t.color == _turno && _turno != _o)
		return true;
		break;

	case 3:
		if (t.estado == 1 && (abs(s.getFila() - t.fc.getF()) == abs(s.getColumna() - t.fc.getC())) && t.color == _turno && _turno != _o)
		return true;
		break;

	case 4:
		if (t.estado == 1 && (s.getFila() == t.fc.getF() || s.getColumna() == t.fc.getC()|| (abs(s.getFila() - t.fc.getF()) == abs(s.getColumna() - t.fc.getC()))) && t.color == _turno && _turno != _o)
		return true;
		break;

	case 5:
		if (t.estado == 1 && (abs(s.getColumna() - t.fc.getC()) <= 1 && abs(s.getFila() - t.fc.getF()) <= 1) && t.color == _turno && _turno != _o)
		return true;
		break;
	
	case 6:
		if (t.color == 0 && t.estado == 1 && ((s.getColumna() - t.fc.getC()) == 1) && ((s.getFila() - t.fc.getF()) == 0) && t.color == _turno && _turno != _o) 
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
	if (t.fc.getF() == _f && t.fc.getC() == _c)
		return true;
	return false;
}