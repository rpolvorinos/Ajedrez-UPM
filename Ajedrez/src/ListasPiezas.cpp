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
	for (int i = 0; i < MAX_4; i++)
		lista3[i] = 0;
	for (int i = 0; i < MAX_2; i++)
		lista4[i] = 0;
	for (int i = 0; i < MAX_2; i++)
		lista5[i] = 0;
	for (int i = 0; i < MAX_16; i++)
		lista6[i] = 0;
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

bool ListasPiezas::agregar(Caballo* t)
{
	if (numero3 < MAX_4)
		lista3[numero3++] = t; // último puesto sin rellenar
	else
		return false; // capacidad máxima alcanzada
	return true;
}

bool ListasPiezas::agregar(Rey* t)
{
	if (numero4 < MAX_2)
		lista4[numero4++] = t; // último puesto sin rellenar
	else
		return false; // capacidad máxima alcanzada
	return true;
}

bool ListasPiezas::agregar(Dama* t)
{
	if (numero5 < MAX_2)
		lista5[numero5++] = t; // último puesto sin rellenar
	else
		return false; // capacidad máxima alcanzada
	return true;
}

bool ListasPiezas::agregar(Peon* t)
{
	if (numero6 < MAX_16)
		lista6[numero6++] = t; // último puesto sin rellenar
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
	for (int i = 0; i < numero3 - 2; i++)
		lista3[i]->dibujab();
	for (int j = 2; j < numero3; j++)
		lista3[j]->dibujaw();
		lista4[1]->dibujab();
		lista4[0]->dibujaw();
		lista5[1]->dibujab();
		lista5[0]->dibujaw();
	for (int i = 0; i < numero6 - 8; i++)
		lista6[i]->dibujab();
	for (int j = 2; j < numero6; j++)
		lista6[j]->dibujaw();
}

void ListasPiezas::mover(Selector s, int& _turno)
{
	for (int i = 0;i < 4;i++)
		Interaccion::mov(*lista1[i], s,_turno);
	for (int i = 0;i < 4;i++)
		Interaccion::mov(*lista2[i], s,_turno);
	for (int i = 0;i < 4;i++)
		Interaccion::mov(*lista3[i], s, _turno);
	for (int i = 0;i < 2;i++)
		Interaccion::mov(*lista4[i], s, _turno);
	for (int i = 0;i < 2;i++)
		Interaccion::mov(*lista5[i], s, _turno);
	for (int i = 0;i < 16;i++)
		Interaccion::mov(*lista6[i], s, _turno);
}