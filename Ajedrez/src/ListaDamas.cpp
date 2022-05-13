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
		lista[numero++] = t; // �ltimo puesto sin rellenar
	else
		return false; // capacidad m�xima alcanzada
	return true;

}

void ListaDamas::dibuja()
{
	lista[0]->dibujaw();

	lista[1]->dibujab();
}