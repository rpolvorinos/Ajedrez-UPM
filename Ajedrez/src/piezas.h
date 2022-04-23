#include "peones.h"
#include "ListaPeones.h"
#include "Torres.h"

class Piezas
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

	ListaPeones peones;
	Torres torre1, torre2,torre3,torre4;
};