
#ifndef FRACCION_H
#define FRACCION_H

#include <iostream>
using namespace std;

class Fraccion
{
	private:
		int iNumerador;
		int iDenominador;
	public:
		Fraccion();
		Fraccion(int, int);
		int getNumerador();
		int getDenominador();
		void setNumerador(int);
		void setDenominador(int);
		Fraccion sumaFraccion(Fraccion);
		Fraccion restaFraccion(Fraccion);
		Fraccion multiplicaFraccion(Fraccion);
		Fraccion divideFraccion(Fraccion);
		void toString();
};

Fraccion::Fraccion()
{
	iNumerador = 1;
	iDenominador = 2;
}

Fraccion::Fraccion(int iN, int iD)
{
	iNumerador = iN;
	iDenominador = iD;
}

int Fraccion::getNumerador()
{
	return iNumerador;
}

int Fraccion::getDenominador()
{
	return iDenominador;
}

void Fraccion::setNumerador(int iN)
{
	iNumerador = iN;
}

void Fraccion::setDenominador(int iD)
{
	iDenominador = iD;
}

Fraccion Fraccion::sumaFraccion(Fraccion f2)
{
	int iD = iDenominador * f2.getDenominador();
	int iN = f2.getDenominador() * iNumerador
			 + iDenominador * f2.getNumerador();
	Fraccion f3(iN, iD);
	return f3;
}

Fraccion Fraccion::restaFraccion(Fraccion f2)
{
	int iD = iDenominador * f2.getDenominador();
	int iN = f2.getDenominador() * iNumerador
			 - iDenominador * f2.getNumerador();
	Fraccion f3(iN, iD);
	return f3;
}

Fraccion Fraccion::multiplicaFraccion(Fraccion f2)
{
	int iN = iNumerador * f2.getNumerador();
	int iD = iDenominador * f2.getDenominador();
	Fraccion f3(iN, iD);
	return f3;
}

Fraccion Fraccion::divideFraccion(Fraccion f2)
{
	int iN = iNumerador * f2.getDenominador();
	int iD = iDenominador * f2.getNumerador();
	Fraccion f3(iN, iD);
	return f3;
}

void Fraccion::toString()
{
	cout << iNumerador << '/' << iDenominador << endl;
}

#endif
