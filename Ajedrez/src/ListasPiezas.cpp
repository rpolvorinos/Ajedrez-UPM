#include "ListasPiezas.h"
#include "Interaccion.h"
#include "Mundo.h"

ListasPiezas::ListasPiezas()
{
	n = 0;
	for (int i = 0; i < MAX_4; i++)
		lista[i] = 0;
}

bool ListasPiezas::agregar(Pieza* t)
{
	if (n < MAX_32)
		lista[n++] = t; // último puesto sin rellenar
	else
		return false; // capacidad máxima alcanzada
	return true;
}

void ListasPiezas::dibuja()
{
	for (int i = 0; i < n; i++) {

		lista[i]->dibuja();
	}		

}

void ListasPiezas::mover(Selector s, int& _turno,int& _o, ListasPiezas& l)
{
	for (int i = 0; i < n; i++)
		Interaccion::moverPieza(*lista[i], s, _turno, _o, l);
		
}

/*void ListasPiezas::eliminar(Pieza* e)
{
	for (int i = 0;i < MAX_32;i++)
		if (lista[i] == e)
		{
			lista[i]->setDatos(0.5, 9, 5);
			
			return;
		}
}*/

Pieza* ListasPiezas::colision(int _f, int _c, int _turn)
{
	for (int i = 0;i < MAX_32;i++)
	{
		if (Interaccion::captura(*(lista[i]), _f, _c))
			return lista[i];
	}
	return 0; //no hay colisión
}

void ListasPiezas::eliminar(int index)
{
	if ((index < 0) || (index >= n))
		return;
	delete lista[index];
	n--;
	for (int i = index; i < n; i++)
		lista[i] = lista[i + 1];
}

void ListasPiezas::eliminar(Pieza* e)
{
	for (int i = 0; i < n; i++)
		if (lista[i] == e)
		{
			eliminar(i);
			ETSIDI::play("sonidos/impacto.wav");
			return;
		}
}