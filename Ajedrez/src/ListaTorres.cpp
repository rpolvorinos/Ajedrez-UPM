#include "ListaTorres.h"

ListaTorres::ListaTorres()
{
	numero = 0;
	for (int i = 0; i < MAX_TORRES; i++)
		lista[i] = 0;
}

bool ListaTorres::agregar(Torre* t)
{
	if (numero < MAX_TORRES)
		lista[numero++] = t; // último puesto sin rellenar
	else
		return false; // capacidad máxima alcanzada
	return true;

}

void ListaTorres::dibuja()
{
	for (int i = 0; i < numero - 2; i++)
		lista[i]->dibujab();

	for (int j = 2; j < numero; j++)
		lista[j]->dibujaw();
}