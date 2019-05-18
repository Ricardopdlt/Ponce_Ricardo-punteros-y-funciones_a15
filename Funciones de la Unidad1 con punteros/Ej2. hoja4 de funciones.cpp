//Ej2 hoja4 funciones

#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace System;
using namespace std;

// PARÁMETROS POR VALOR//
/*int precioSeguro(char sex, int ed)
{
	float pago;
	pago = (toupper(sex) == 'F' && ed < 21) * 800 + (toupper(sex) == 'F' && ed >= 21) * 500 + (toupper(sex) == 'M' && ed < 25) * 1000 + (toupper(sex) == 'M' && ed >= 25) * 700;
	return pago;
}
int main()
{
	int n1;
	char sex1;
	int ed1;

	do
	{
		cout << "Ingrese su sexo (Masculino: M o Femenino: F): ";
		cin >> sex1;

		if (toupper(sex1) == 'M' || toupper(sex1) == 'F')
		{
			do
			{
				cout << "Ingrese su edad: ";
				cin >> ed1;

				if (ed1 >= 0)
				{

					int pago1 = precioSeguro(sex1, ed1);

					cout << endl;
					cout << "El pago por el seguro ser" << char(161) << "a de: S/" << pago1;

					_getch();
					return 0;

				}
				else
				{
					cout << "ERROR \n";
					cout << "Ingrese una edad mayor o igual a 0 \n";
					cout << endl;

					n1 = 2;
				}


			} while (n1 == 2);





		}
		else
		{
			cout << "ERROR \n";
			cout << "Ingrese correctamente la letra \n";
			cout << endl;

			n1 = 1;

		}

	} while (n1 == 1);
	_getch();
}*/

// PARÁMETROS POR REFERENCIA//
/*int precioSeguro(char &sex, int &ed)
{
	float pago;
	pago = (toupper(sex) == 'F' && ed < 21) * 800 + (toupper(sex) == 'F' && ed >= 21) * 500 + (toupper(sex) == 'M' && ed < 25) * 1000 + (toupper(sex) == 'M' && ed >= 25) * 700;
	return pago;
}
int main()
{
	int n1;
	char sex1;
	int ed1;

	do
	{
		cout << "Ingrese su sexo (Masculino: M o Femenino: F): ";
		cin >> sex1;

		if (toupper(sex1) == 'M' || toupper(sex1) == 'F')
		{
			do
			{
				cout << "Ingrese su edad: ";
				cin >> ed1;

				if (ed1 >= 0)
				{

					int pago1 = precioSeguro(sex1, ed1);

					cout << endl;
					cout << "El pago por el seguro ser" << char(161) << "a de: S/" << pago1;

					_getch();
					return 0;

				}
				else
				{
					cout << "ERROR \n";
					cout << "Ingrese una edad mayor o igual a 0 \n";
					cout << endl;

					n1 = 2;
				}


			} while (n1 == 2);





		}
		else
		{
			cout << "ERROR \n";
			cout << "Ingrese correctamente la letra \n";
			cout << endl;

			n1 = 1;

		}

	} while (n1 == 1);
	_getch();
}*/

// PARÁMETROS POR REFERENCIA PUNTERO//
int precioSeguro(char *sex, int *ed)
{
	float pago;
	pago = (toupper(*sex) == 'F' && *ed < 21) * 800 + (toupper(*sex) == 'F' && *ed >= 21) * 500 + (toupper(*sex) == 'M' && *ed < 25) * 1000 + (toupper(*sex) == 'M' && *ed >= 25) * 700;
	return pago;
}
int main()
{
	int n1;

	char sex1;
	char *sex2;
	sex2 = &sex1;

	int ed1;
	int *ed2;
	ed2 = &ed1;



	do
	{
		cout << "Ingrese su sexo (Masculino: M o Femenino: F): ";
		cin >> sex1;

		if (toupper(sex1) == 'M' || toupper(sex1) == 'F')
		{
			do
			{
				cout << "Ingrese su edad: ";
				cin >> ed1;

				if (ed1 >= 0)
				{

					int pago1 = precioSeguro(sex2, ed2);

					cout << endl;
					cout << "El pago por el seguro ser" << char(161) << "a de: S/" << pago1;

					_getch();
					return 0;

				}
				else
				{
					cout << "ERROR \n";
					cout << "Ingrese una edad mayor o igual a 0 \n";
					cout << endl;

					n1 = 2;
				}


			} while (n1 == 2);





		}
		else
		{
			cout << "ERROR \n";
			cout << "Ingrese correctamente la letra \n";
			cout << endl;

			n1 = 1;

		}

	} while (n1 == 1);
	_getch();
}