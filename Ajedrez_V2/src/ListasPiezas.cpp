#include "ListasPiezas.h"
#include "Interaccion.h"

ListasPiezas::ListasPiezas()
{
	n = 0;
	for (int i = 0; i < MAX_32; i++)
		lista[i] = 0;
}

bool ListasPiezas::agregar(Pieza* t)
{
	if (n < MAX_32) {
		lista[n++] = t;// último puesto sin rellenar
	}
	else
		return false; // capacidad máxima alcanzada
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

//Funcion para elimar una pieza cuando esta ha sido comida por el jugador adversario
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

//Funcion que nos indica si el rey esta en jaque o no (si esta en jaque devuelve TRUE).
/*bool ListasPiezas::comprobarjaque(Casilla c, int _turno, int _o) //en casilla hay que introducir la casilla de los distintos reyes en un bucle en la funcion comprobarjaquemate
{
	int turno_oponente = 0;
	int color = 0; // caso de fichas blancas
	if (_turno == 1) { //caso de fichas negras
		color = 1;
		turno_oponente = 1;
	}

	for (int i = 0; i < MAX_32; i++) //recorremos todas la fichas para comprobar cual produce jaque al rey correspondiente.
	{
		if (lista[i]->getColor() == color && Interaccion::condicionjaque(*lista[i],c,turno_oponente,_o)==true) 
			return true;	
	}
	return false;
}*/
/*bool ListaPiezas::comprobarjaquemate(int _turno, int _o) {

}*/

