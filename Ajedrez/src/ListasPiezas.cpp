#include "ListasPiezas.h"
#include "Interaccion.h"

//Constructor de ListasPiezas
ListasPiezas::ListasPiezas()
{
	n = 0;
	for (int i = 0; i < MAX_32; i++)
		lista[i] = 0;
}

//Funcion para agregar piezas a la lista (TRUE si la lista tiene espacio)
bool ListasPiezas::agregar(Pieza* t)
{
	if (n < MAX_32) {
		lista[n++] = t;// �ltimo puesto sin rellenar
	}
	else
		return false; // capacidad m�xima alcanzada
	return true;
}

//Funcion que nos permite dibujar las distintas piezas
void ListasPiezas::dibuja()
{
	for (int i = 0; i < n; i++) {

		lista[i]->dibuja();
	}		

}

//Funcion para el movimiento de las piezas
void ListasPiezas::mover(Selector s, int& _turno,int& _o, ListasPiezas& l)
{
	for (int i = 0; i < n; i++)
		Interaccion::moverPieza(*lista[i], s, _turno, _o, l);
		
}

//Funcion para la colision entre dos piezas de distintos jugadores
Pieza* ListasPiezas::colision(int _f, int _c, int _turn)
{
	for (int i = 0;i < MAX_32;i++)
	{
		if (Interaccion::captura(*(lista[i]), _f, _c))
			return lista[i];
	}
	return 0; //no hay colisi�n
}

//Funcion para eliminar piezas si se ha introducida alguna y se ha superado el tama�o
void ListasPiezas::eliminar(int index)
{
	if ((index < 0) || (index >= n))
		return;
	delete lista[index];
	n--;
	for (int i = index; i < n; i++)
		lista[i] = lista[i + 1];
}

//Funcion para eliminar una pieza cuando esta ha sido comida por el jugador adversario
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

//Funcion para eliminar el contenido de las piezas
void ListasPiezas::eliminarContenido() {
	for (int i = 0; i < MAX_32; i++) //eliminacion de las piezas
		lista[i] = 0;
	n = 0;
}



