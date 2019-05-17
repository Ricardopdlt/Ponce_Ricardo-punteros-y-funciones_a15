//Ej3 hoja1 punteros y funciones

#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace System;
using namespace std;


void DibujaCuadrado()
{
	int x;
	int y;
	int n;
	char c;

	cout << "Ingrese el car" << char(160) << "cter: ";
	cin >> c;
	cout << endl;

	cout << "Ingrese el tama" << char(164) << "o del cuadrado: ";
	cin >> n;
	cout << endl;

	cout << "Ingrese las coordenadas X y Y" << endl;
	cout << "=======================================" << endl;
	cout << "Coordenada X: ";
	cin >> x;
	cout << "Coordenada Y: ";
	cin >> y;


	for (int j = 1; j <= y; j++)
	{
		cout << endl;

	}
	for (int j = 1; j <= n; j++)
	{

		for (int i = 1; i <= x; i++)
		{
			cout << "  ";
		}
		for (int i = 1; i <= n; i++)
		{
			cout <<" " << c;
		}

		cout << endl;

	}

}

int main()
{

	DibujaCuadrado();

	_getch();

}