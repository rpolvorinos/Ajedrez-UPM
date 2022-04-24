#include "ListaPeones.h"
#include "peones.h"

ListaPeones::ListaPeones()
{
	numero = 0;
	for (int i = 0;i < MAX_PEONES;i++)
		lista[i] = 0;
}

bool ListaPeones::agregar(Peones* e)
{
	if (numero < MAX_PEONES)
		lista[numero++] = e; // último puesto sin rellenar
	else
		return false; // capacidad máxima alcanzada
	return true;
}

void ListaPeones::dibuja()
{
	for (int i = 0;i < numero;i++)
		lista[i]->dibuja();
}