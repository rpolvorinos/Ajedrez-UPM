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
		lista[numero++] = e; // �ltimo puesto sin rellenar
	else
		return false; // capacidad m�xima alcanzada
	return true;
}

void ListaPeones::dibuja()
{
	for (int i = 0;i < numero;i++)
		lista[i]->dibuja();
}