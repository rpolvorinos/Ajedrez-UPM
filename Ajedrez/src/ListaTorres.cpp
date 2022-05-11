#include "ListaTorres.h"
#include "Interaccion.h"
#include "Mundo.h"

ListaTorres::ListaTorres()
{
	numero = 0;
	for (int i = 0; i < MAX_TORRES; i++)
		lista[i] = 0;
}

bool ListaTorres::agregar(Torre* t)
{
	if (numero < MAX_TORRES)
		lista[numero++] = t; // �ltimo puesto sin rellenar
	else
		return false; // capacidad m�xima alcanzada
	return true;

}

void ListaTorres::dibuja()
{
	for (int i = 0; i < numero - 2; i++)
		lista[i]->dibujab();

	for (int j = 2; j < numero; j++)
		lista[j]->dibujaw();
}

void ListaTorres::mover(Selector s)
{
	for (int i = 0;i < 4;i++)
		Interaccion::mov(*lista[i],s);
}