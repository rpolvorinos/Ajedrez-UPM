#include "ListaReyes.h"

ListaReyes::ListaReyes()
{
	numero = 0;
	for (int i = 0; i < MAX_REYES; i++)
		lista[i] = 0;
}

bool ListaReyes::agregar(Rey* t)
{
	if (numero < MAX_REYES)
		lista[numero++] = t; // �ltimo puesto sin rellenar
	else
		return false; // capacidad m�xima alcanzada
	return true;

}

void ListaReyes::dibuja()
{/*
	for (int i = 0; i < numero - 2; i++)
		lista[i]->dibujab();
	
	for (int j = 2; j < numero; j++)
		lista[j]->dibujab();*/
}
