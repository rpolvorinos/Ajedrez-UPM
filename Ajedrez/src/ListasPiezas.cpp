#include "ListasPiezas.h"
#include "Interaccion.h"
#include "Mundo.h"

ListasPiezas::ListasPiezas()
{
	n = 0;
	for (int i = 0; i < MAX_4; i++)
		lista[i] = 0;
}

bool ListasPiezas::agregar(Pieza* t)
{
	if (n < MAX_32)
		lista[n++] = t; // último puesto sin rellenar
	else
		return false; // capacidad máxima alcanzada
	return true;
}

void ListasPiezas::dibuja()
{
	for (int i = 0; i < n; i++) {

		lista[i]->dibuja();
	}		

}

void ListasPiezas::mover(Selector s, int& _turno,int& _o)
{
	for (int i = 0;i < n;i++)
		Interaccion::mov(*lista[i], s,_turno,_o);
	
}
/*
void ListasPiezas::setOcupacion(int _f, int _c,int _o)
{
	ocupacion[_f][_c] = _o;
}

int ListasPiezas::getOcupacion(int _f, int _c)
{
	return ocupacion[_f][_c];
}*/