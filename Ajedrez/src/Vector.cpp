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