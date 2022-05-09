#include "ObjetoMovil.h"
#include <stdlib.h>

void ObjetoMovil::mueve(float t) {

	Vector ruido(0.1f * (0.5f - rand() / ((float)RAND_MAX)), 0);
	posicion = posicion + velocidad * t + aceleracion * (0.5f * t * t);
	velocidad = velocidad + aceleracion * t;
}