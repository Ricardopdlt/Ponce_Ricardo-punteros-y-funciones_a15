//Ej1 hoja4 funciones

#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace System;
using namespace std;

// PARÁMETROS POR VALOR//
/*float ventaNeumaticos(int n)
{
	float costo;
	costo = (n < 3) * 145*n + (n >= 3 && n <= 5) * 138*n + (n > 5) * 135*n;

	return costo;
}
int main()
{
	int n1;
	int num;
	do
	{
		cout << "Ingrese el n" << char(163) << "mero de neum" << char(160) << "ticos que desea comprar: ";
		cin >> num;
		cout << endl;

		if (num > 0)
		{

			float costo1 = ventaNeumaticos(num);

			cout << "El costo total ser" << char(161) << "a: S/" << costo1;

			_getch();
			return 0;
		}
		else
		{
			cout << "ERROR \n";
			cout << "Ingrese un n" << char(163) << "mero mayor a 0 \n";
			cout << endl;
			n1 = 1;
		}

	} while (n1 == 1);

	_getch();
}*/ 


// PARÁMETROS POR REFERENCIA//
/*float ventaNeumaticos(int &n)
{
	float costo;
	costo = (n < 3) * 145*n + (n >= 3 && n <= 5) * 138*n + (n > 5) * 135*n;

	return costo;
}
int main()
{
	int n1;
	int num;
	do
	{
		cout << "Ingrese el n" << char(163) << "mero de neum" << char(160) << "ticos que desea comprar: ";
		cin >> num;
		cout << endl;

		if (num > 0)
		{

			float costo1 = ventaNeumaticos(num);

			cout << "El costo total ser" << char(161) << "a: S/" << costo1;

			_getch();
			return 0;
		}
		else
		{
			cout << "ERROR \n";
			cout << "Ingrese un n" << char(163) << "mero mayor a 0 \n";
			cout << endl;
			n1 = 1;
		}

	} while (n1 == 1);

	_getch();
}*/


// PARÁMETROS POR REFERENCIA PUNTERO//
float ventaNeumaticos(int *n)
{
	float costo;
	costo = (*n < 3) * 145**n + (*n >= 3 && *n <= 5) * 138**n + (*n > 5) * 135**n;

	return costo;
}
int main()
{
	int n1;

	int num;
	int *num1;
	num1 = &num;

	do
	{
		cout << "Ingrese el n" << char(163) << "mero de neum" << char(160) << "ticos que desea comprar: ";
		cin >> num;
		cout << endl;

		if (num > 0)
		{

			float costo1 = ventaNeumaticos(num1);

			cout << "El costo total ser" << char(161) << "a: S/" << costo1;

			_getch();
			return 0;
		}
		else
		{
			cout << "ERROR \n";
			cout << "Ingrese un n" << char(163) << "mero mayor a 0 \n";
			cout << endl;
			n1 = 1;
		}

	} while (n1 == 1);

	_getch();
}

