#include "ListaCaballos.h"

ListaCaballos::ListaCaballos()
{
	numero = 0;
	for (int i = 0; i < MAX_CABALLOS; i++)
		lista[i] = 0;
}

bool ListaCaballos::agregar(Caballo* t)
{
	if (numero < MAX_CABALLOS)
		lista[numero++] = t; // último puesto sin rellenar
	else
		return false; // capacidad máxima alcanzada
	return true;

}

void ListaCaballos::dibuja()
{
	for (int i = 0; i < numero - 2; i++)
		lista[i]->dibujab();

	for (int j = 2; j < numero; j++)
		lista[j]->dibujaw();
}