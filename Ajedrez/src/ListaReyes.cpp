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
{
	lista[0]->dibujaw();
	
	lista[1]->dibujab();
}
