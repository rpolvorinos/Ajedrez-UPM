#include "ListaAlfiles.h"
#include "Selector.h"
#include "Interaccion.h"

ListaAlfiles::ListaAlfiles()
{
	numero = 0;
	for (int i = 0; i < MAX_ALFILES; i++)
		lista[i] = 0;
}

bool ListaAlfiles::agregar(Alfil* t)
{
	if (numero < MAX_ALFILES)
		lista[numero++] = t; // último puesto sin rellenar
	else
		return false; // capacidad máxima alcanzada
	return true;

}

void ListaAlfiles::dibuja()
{
	for (int i = 0; i < numero - 2; i++)
		lista[i]->dibujab();

	for (int j = 2; j < numero; j++)
		lista[j]->dibujaw();
}

void ListaAlfiles::mover(Selector s)
{
	for (int i = 0;i < 4;i++)
		Interaccion::mov(*lista[i], s);
}