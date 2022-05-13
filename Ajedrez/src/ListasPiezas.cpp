#include "ListasPiezas.h"
#include "Interaccion.h"
#include "Mundo.h"

ListasPiezas::ListasPiezas()
{
	numero1= numero2= numero3= numero4= numero5= numero6 = 0;
	for (int i = 0; i < MAX_4; i++)
		lista1[i] = 0;
	for (int i = 0; i < MAX_4; i++)
		lista2[i] = 0;
}

bool ListasPiezas::agregar(Torre* t)
{
	if (numero1 < MAX_4)
		lista1[numero1++] = t; // último puesto sin rellenar
	else
		return false; // capacidad máxima alcanzada
	return true;

}

bool ListasPiezas::agregar(Alfil* t)
{
	if (numero2 < MAX_4)
		lista2[numero2++] = t; // último puesto sin rellenar
	else
		return false; // capacidad máxima alcanzada
	return true;

}

void ListasPiezas::dibuja()
{
	for (int i = 0; i < numero1 - 2; i++)
		lista1[i]->dibujab();

	for (int j = 2; j < numero1; j++)
		lista1[j]->dibujaw();

	for (int i = 0; i < numero2 - 2; i++)
		lista2[i]->dibujab();

	for (int j = 2; j < numero2; j++)
		lista2[j]->dibujaw();
}

void ListasPiezas::mover(Selector s)
{
	for (int i = 0;i < 4;i++)
		Interaccion::mov(*lista1[i], s);
	for (int i = 0;i < 4;i++)
		Interaccion::mov(*lista2[i], s);
}