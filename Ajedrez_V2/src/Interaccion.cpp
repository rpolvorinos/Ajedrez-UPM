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
		if(condicion(t,s,_turno,_o))
		{
			Pieza* aux = l.colision(s.getFila(), s.getColumna(), _turno);
			if (aux != 0 && _turno != aux->getColor())
			{
				l.eliminar(aux);
			}
			if (aux != 0 && _turno == aux->getColor()) {}
			else {
				t.setPos(s.getFila(), s.getColumna());
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


bool Interaccion::captura(Pieza t, int _f, int _c)
{
	if (t.getfila() == _f && t.getcolumna() == _c)
		return true;
	return false;
}

bool Interaccion::condicion(Pieza& t, Selector s, int& _turno, int& _o)
{
	switch (t.getTipoPieza())
	{
	case 1:
		if (t.getEstado() == 1 && (s.getFila() == t.getfila() || s.getColumna() == t.getcolumna()) && t.getColor() == _turno && _turno != _o) //Movimiento de las torres blancas y negras
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

//Funcion que nos indica si hay piezas en la trayectoria del movimiento ( si no hay devuelve TRUE)
bool Interaccion::condicionjaque(Pieza& t, Casilla s)
{
	switch (t.getTipoPieza())
	{
	case 1:
		if ((s.getF() == t.getfila() || s.getC() == t.getcolumna())) //Movimiento de las torres blancas y negras
			return true;
		break;

	case 2:
		if (((abs(s.getC() - t.getcolumna()) == 1 && abs(s.getF() - t.getfila()) == 2) || (abs(s.getC() - t.getcolumna()) == 2 && abs(s.getF() - t.getfila()) == 1))) //Movimiento de los caballos blancos y negros
			return true;
		break;

	case 3:
		if ((abs(s.getF() - t.getfila()) == abs(s.getC() - t.getcolumna()))) //Movimiento de los alfiles blancos y negros
			return true;
		break;

	case 4:
		if ((s.getF() == t.getfila() || s.getC() == t.getcolumna() || (abs(s.getF() - t.getfila()) == abs(s.getC() - t.getcolumna()))))	//Movimiento de las damas blancas y negras
			return true;
		break;

	case 5:
		if ((abs(s.getC() - t.getcolumna()) <= 1 && abs(s.getF() - t.getfila()) <= 1))	//movimiento de los reyes blanco y negro
			return true;
		break;

	case 6:
		if (t.getColor() == 0 && ((s.getC() - t.getcolumna()) == 1) && ((s.getF() - t.getfila()) == 0)) //Movimiento peones blancos
			return true;
		if (t.getColor() == 1 && ((t.getcolumna() - s.getC()) == 1) && ((s.getF() - t.getfila()) == 0)) //Movimiento peones negros
			return true;
		break;
	}

	return false;
}
