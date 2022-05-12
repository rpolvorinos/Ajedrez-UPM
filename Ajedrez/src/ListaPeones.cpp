#include "ListaPeones.h"
#include "Selector.h"
#include "Interaccion.h"

ListaPeones::ListaPeones()
{
	numero = 0;
	for (int i = 0; i < MAX_PEONES; i++)
		lista[i] = 0;
}

bool ListaPeones::agregar(Peon* t)
{
	if (numero < MAX_PEONES)
		lista[numero++] = t; // último puesto sin rellenar
	else
		return false; // capacidad máxima alcanzada
	return true;

}

void ListaPeones::dibuja()
{
	for (int i = 0; i < numero - 8; i++)
		lista[i]->dibujab();

	for (int j = 8; j < numero; j++)
		lista[j]->dibujaw();
}

void ListaPeones::mover(Selector s)
{
	for (int i = 0;i < 4;i++)
		Interaccion::mov(*lista[i], s);
}