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



## Controles del juego
| **Tecla**        | **Función**                               |
| ---              | ---                                       |
|Barra espaciadora | Seleccionar pieza                         |
|        ↑         | Moverse con el selector hacia arriba      |
|        →         | Moverse con el selector hacia la derecha  |
|        ←         | Moverse con el selector hacia la izquierda|
|        ↓         | Moverse con el selector hacia abajo       |
|       E/e        | Empezar la partida                        |
|       S/s        | Salir de la partida                       |

*Selector: Casilla móvil pintada de color verde*

## Equivalencias
<img width="444" alt="Captura de Pantalla 2022-05-22 a las 21 22 46" src="https://user-images.githubusercontent.com/61022558/169712409-71d29437-c64f-46aa-b013-84496b917c27.png">


