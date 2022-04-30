#include "Peon.h"
#include "ListaPeones.h"
#include "Torre.h"
#include "Rey.h"
#include "Dama.h"
#include "Alfil.h"
#include "Caballo.h"
#include "Tablero.h"

class Mundo
{
public:
	void tecla(unsigned char key);
	void inicializa();
	void rotarOjo();
	void mueve();
	void dibuja();

	float x_ojo;
	float y_ojo;
	float z_ojo;

	char w, b;

	ListaPeones peones;
	Rey rey1, rey2;
	Dama dama1, dama2;
	Torre torre1, torre2,torre3,torre4;
	Alfil alfil1, alfil2, alfil3, alfil4;
	Caballo caballo1, caballo2, caballo3, caballo4;
	Tablero tablero;


};