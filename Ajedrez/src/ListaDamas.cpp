#include "ListaDamas.h"

ListaDamas::ListaDamas()
{
	numero = 0;
	for (int i = 0; i < MAX_DAMAS; i++)
		lista[i] = 0;
}

bool ListaDamas::agregar(Dama* t)
{
	if (numero < MAX_DAMAS)
		lista[numero++] = t; // último puesto sin rellenar
	else
		return false; // capacidad máxima alcanzada
	return true;

}

void ListaDamas::dibuja()
{/*
	for (int i = 0; i < numero - 2; i++)
		lista[i]->dibujab();
	
	for (int j = 2; j < numero; j++)
		lista[j]->dibujab();*/
}