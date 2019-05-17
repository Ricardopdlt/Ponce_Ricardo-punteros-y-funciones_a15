//Ej1 hoja1 punteros y funciones

#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace System;
using namespace std;


void DibujaCuadrado()
{
	for (int j = 1; j <= 3; j++)
	{
		for (int i = 1; i <= 3; i++)
		{

			cout << "* ";

		}

		cout << endl;
	}

}

int main()
{

	DibujaCuadrado();

	_getch();
}