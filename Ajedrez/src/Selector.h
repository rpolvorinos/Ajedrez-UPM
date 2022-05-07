#pragma once
class Selector
{
private:
	int fila, columna;
public:
	Selector();
	
	void inicializa();
	void mover(unsigned char key);

	friend class Tablero;
};



