# AJEDREZ 2D
Este proyecto correspondiente a la asignatura de informática industrial y de las comunicaciones, trata sobre un juego de ajedrez en 2D.
El ajedrez es un juego de mesa de estrategia para dos jugadores, se juega sobre un tablero subdividido en 8 filas y 8 columnas que forman 64 casillas.
En cada partida existen dos jugadores, al primer jugador se le asignan las piezas blancas y al segundo las piezas negras.



![giphy](https://user-images.githubusercontent.com/61022558/166662205-5d0c68c3-42f8-429c-86f7-e09494c2dcdd.gif)

## Detalles del juego

**Reglas**
- Cada jugador empieza con 16 piezas (2 Torres, 2 Caballos, 2 Alfiles, 1 Reina, 1 Rey y 8 Peones).
- El primer turno es para el jugador de figuras blancas y el siguiente para el de figuras negras.
- Otras reglas se pueden encontrar en [Reglas de Ajedrez-wikipedia](https://es.wikipedia.org/wiki/Leyes_del_ajedrez#Reglas)


**Estados**
- Jaque: cuando el rey está bajo ataque inmediato de la pieza del oponente (*El rey está en peligro*).
- Jaque mate: estado de jaque sin movimiento válido para que el jugador deje el rey a salvo.


**Resultado**
- Ganador-El jugador que provoca un jaque mate al oponente.
- Perdedor-El jugador que recibe el jaque mate.
- Tablas- Rey Ahogado (El rey ahogado es una situación que se produce cuando el jugador de quien es el turno no tiene jugadas legales para realizar y el rey no se encuentra en estado de jaque)


## Controles del juego
| **Tecla**        | **Función**                               |
| ---              | ---                                       |
|Barra espaciadora |Selección pieza                            |
|        ↑         | Moverse con el selector hacia arriba      |
|        →         | Moverse con el selector hacia la derecha  |
|        ←         | Moverse con el selector hacia la izquierda|
