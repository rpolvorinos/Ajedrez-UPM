
#include "Listapiezas.h"

Listapiezas::Listapiezas()
{
	numero1 = numero2 = numero3 = numero4 = numero5 = numero6 = 0;
	for (int i = 0; i < MAX_PEONES; i++)
		lista1[i] = 0;

	for (int i = 0; i < MAX_TORRES; i++)
		lista2[i] = 0;

	for (int i = 0; i < MAX_REYES; i++)
		lista3[i] = 0;

	for (int i = 0; i < MAX_DAMAS; i++)
		lista4[i] = 0;

	for (int i = 0; i < MAX_ALFILES; i++)
		lista5[i] = 0;

	for (int i = 0; i < MAX_CABALLOS; i++)
		lista6[i] = 0;
}



bool Listapiezas::agregar(Peon* e)
{
	if (numero1 < MAX_PEONES)
		lista1[numero1++] = e; // último puesto sin rellenar
	else
		return false; // capacidad máxima alcanzada
	return true;
}


bool Listapiezas::agregar(Torre* e)
{
	if (numero2 < MAX_TORRES)
		lista2[numero2++] = e; // último puesto sin rellenar
	else
		return false; // capacidad máxima alcanzada
	return true;

}

bool Listapiezas::agregar(Rey* e)
{
	if (numero3 < MAX_REYES)
		lista3[numero3++] = e; // último puesto sin rellenar
	else
		return false; // capacidad máxima alcanzada
	return true;

}
bool Listapiezas::agregar(Dama* e)
{

	if (numero4 < MAX_DAMAS)
		lista4[numero4++] = e; // último puesto sin rellenar
	else
		return false; // capacidad máxima alcanzada
	return true;
}
bool Listapiezas::agregar(Alfil* e)
{
	if (numero5 < MAX_ALFILES)
		lista5[numero5++] = e; // último puesto sin rellenar
	else
		return false; // capacidad máxima alcanzada
	return true;
}
bool Listapiezas::agregar(Caballo* e)
{
	if (numero6 < MAX_CABALLOS)
		lista6[numero6++] = e; // último puesto sin rellenar
	else
		return false; // capacidad máxima alcanzada
	return true;
}

void Listapiezas::dibuja()
{

	//Dibujo de los peones
	for (int i = 0; i < numero1 - 8; i++)
		lista1[i]->dibujab();

	for (int j = 8; j < numero1; j++)
		lista1[j]->dibujaw();

	//Dibujo de las torres
	for (int i = 0; i < numero2 - 2; i++)
		lista2[i]->dibujab();

	for (int j = 2; j < numero2; j++)
		lista2[j]->dibujaw();

	//Dibujo de los reyes

	lista3[0]->dibujaw();
	lista3[1]->dibujab();

	//Dibujo de las Damas
	lista4[0]->dibujaw();
	lista4[1]->dibujab();

	//Dibujo de los alfiles
	for (int i = 0; i < numero2 - 2; i++)
		lista5[i]->dibujab();

	for (int j = 2; j < numero2; j++)
		lista5[j]->dibujaw();

	//Dibujo de los caballos
	for (int i = 0; i < numero2 - 2; i++)
		lista6[i]->dibujab();

	for (int j = 2; j < numero2; j++)
		lista6[j]->dibujaw();
}
//
