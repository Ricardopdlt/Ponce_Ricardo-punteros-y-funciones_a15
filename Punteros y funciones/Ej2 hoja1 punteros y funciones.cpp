//Ej2 hoja1 punteros y funciones

#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace System;
using namespace std;


void DibujaCuadrado()
{
	int n;
	char c;

	cout << "Ingrese el car" << char(160) << "cter: ";
	cin >> c;
	cout << endl;

	cout << "Ingrese el tama" << char(164) << "o del cuadrado: ";
	cin >> n;
	cout << endl;

	for (int j = 1; j <= n; j++)
	{
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