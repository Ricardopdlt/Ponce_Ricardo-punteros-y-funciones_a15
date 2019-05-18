//Ej4 hoja4 funciones

#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace System;
using namespace std;

// PARÁMETROS POR VALOR//
/*float pagoHoras(int h)
{
	float pago;
	pago = (h <= 40)*h * 16 + (h > 40)*(40 * 16 + (h - 40) * 20);
	return pago;
}
int main()
{
	int n1;
	int ho;
	do
	{
		cout << "Ingrese el n" << char(163) << "mero de horas trabajadas: ";
		cin >> ho;
		cout << endl;
		if (ho > 0)
		{
			float pago1 = pagoHoras(ho);
			cout << "El salario semanal ser" << char(161) << "a de: S/" << pago1;
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
/*float pagoHoras(int &h)
{
	float pago;
	pago = (h <= 40)*h * 16 + (h > 40)*(40 * 16 + (h - 40) * 20);
	return pago;
}
int main()
{
	int n1;
	int ho;
	do
	{
		cout << "Ingrese el n" << char(163) << "mero de horas trabajadas: ";
		cin >> ho;
		cout << endl;
		if (ho > 0)
		{
			float pago1 = pagoHoras(ho);
			cout << "El salario semanal ser" << char(161) << "a de: S/" << pago1;
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
float pagoHoras(int *h)
{
	float pago;
	pago = (*h <= 40)**h * 16 + (*h > 40)*(40 * 16 + (*h - 40) * 20);
	return pago;
}
int main()
{
	int n1;

	int ho;
	int *ho1;
	ho1 = &ho;

	do
	{
		cout << "Ingrese el n" << char(163) << "mero de horas trabajadas: ";
		cin >> ho;
		cout << endl;
		if (ho > 0)
		{
			float pago1 = pagoHoras(ho1);
			cout << "El salario semanal ser" << char(161) << "a de: S/" << pago1;
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
