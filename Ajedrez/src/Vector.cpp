#include "Vector.h"

Vector::Vector(float xv,float yv)
{
	x = xv;
	y = yv;
}

Vector Vector::operator+(Vector op) {

	Vector resultado;
	resultado.x = x + op.x;
	resultado.y = y + op.y;
	return resultado;
}

float Vector::operator*(Vector op) {
	float resultado;
	resultado = x * op.x + y * op.y;
	return resultado;
}
Vector Vector::operator*(float op) {
	Vector resultado;
	resultado.x = x * op;
	resultado.y = y * op;
	return resultado;

}
Vector Vector::operator+(float real) {

	Vector resultado;
	resultado.x = x + real;
	resultado.y = y + real;
	return resultado;

}

Vector Vector::conversor(int _f, int _c) {

	Vector resultado;
	switch (_f) {

	case 1:
		resultado.x = -9.9;
		break;
	case 2:
		resultado.x = -8.45;
		break;
	case 3:
		resultado.x = -7;q2235es
		break;
	case 4:
		resultado.x = -5.55;
		break;
	case 5:
		resultado.x = -4.05;
		break;
	case 6:
		resultado.x = -2.55;
		break;
	case 7:
		resultado.x = -1.15;
		break;
	case 8:
		resultado.x = 0.35;
		break;
	}

	switch (_c) {

	case 1:
		resultado.y = -6.4;
		break;
	case 2:
		resultado.y = -4.85;
		break;
	case 3:
		resultado.y = -3.35;
		break;
	case 4:
		resultado.y = -1.9;
		break;
	case 5:
		resultado.y = -0.45;
		break;
	case 6:
		resultado.y = -1;
		break;
	case 7:
		resultado.y = 2.35;
		break;
	case 8:
		resultado.y = 3.85;
		break;

	}

	return resultado;
}