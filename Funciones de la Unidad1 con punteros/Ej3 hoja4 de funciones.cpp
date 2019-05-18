//Ej3 hoja4 funciones

#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace System;
using namespace std;

// PARÁMETROS POR VALOR//
/*float precioPizza(float d, int ex)
{
	float costo;
	costo = d * 1.5 + ex * 2.5;
	return costo;
}
int main()
{
	int n1;
	float dm;// diametro
	int ext; // cant. de ingredientes extras.

	do
	{
		cout << "Ingrese el di" <<char(160)<<"metro de la pizza que desea comprar: ";
		cin >> dm;
		cout << endl;
		if (dm > 0)
		{
			do
			{
				cout << "Ingrese la cantidad de ingredientes extras que desea a" << char(164) << "adir: ";
				cin >> ext;

				if (ext >= 0)
				{

					float costo1 = precioPizza(dm, ext);

					cout << endl;
					cout << "El precio de la pizza ser" << char(161) << "a de: S/" << costo1;

					_getch();
					return 0;
				}
				else
				{
					cout << "ERROR \n";
					cout << "Ingrese una cantidad de ingredientes extras mayor o igual a 0 \n";
					cout << endl;
					n1 = 2;

				}



			} while (n1 == 2);

		}
		else
		{
			cout << "ERROR \n";
			cout << "Ingrese un di" << char(160) << "mero mayor a 0 \n";
			cout << endl;
			n1 = 1;
		}
	} while (n1 == 1);
	_getch();
}*/

// PARÁMETROS POR REFERENCIA//
/*float precioPizza(float &d, int &ex)
{
	float costo;
	costo = d * 1.5 + ex * 2.5;
	return costo;
}
int main()
{
	int n1;
	float dm;// diametro
	int ext; // cant. de ingredientes extras.

	do
	{
		cout << "Ingrese el di" << char(160) << "metro de la pizza que desea comprar: ";
		cin >> dm;
		cout << endl;
		if (dm > 0)
		{
			do
			{
				cout << "Ingrese la cantidad de ingredientes extras que desea a" << char(164) << "adir: ";
				cin >> ext;

				if (ext >= 0)
				{

					float costo1 = precioPizza(dm, ext);

					cout << endl;
					cout << "El precio de la pizza ser" << char(161) << "a de: S/" << costo1;

					_getch();
					return 0;
				}
				else
				{
					cout << "ERROR \n";
					cout << "Ingrese una cantidad de ingredientes extras mayor o igual a 0 \n";
					cout << endl;
					n1 = 2;

				}



			} while (n1 == 2);

		}
		else
		{
			cout << "ERROR \n";
			cout << "Ingrese un di" << char(160) << "mero mayor a 0 \n";
			cout << endl;
			n1 = 1;
		}
	} while (n1 == 1);
	_getch();
}*/

// PARÁMETROS POR REFERENCIA PUNTERO//
float precioPizza(float *d, int *ex)
{
	float costo;
	costo = *d * 1.5 + *ex * 2.5;
	return costo;
}
int main()
{
	int n1;

	float dm;// diametro
	float *dm1;
	dm1 = &dm;

	int ext; // cant. de ingredientes extras.
	int *ext1;
	ext1 = &ext;

	do
	{
		cout << "Ingrese el di" << char(160) << "metro de la pizza que desea comprar: ";
		cin >> dm;
		cout << endl;
		if (dm > 0)
		{
			do
			{
				cout << "Ingrese la cantidad de ingredientes extras que desea a" << char(164) << "adir: ";
				cin >> ext;

				if (ext >= 0)
				{

					float costo1 = precioPizza(dm1, ext1);

					cout << endl;
					cout << "El precio de la pizza ser" << char(161) << "a de: S/" << costo1;

					_getch();
					return 0;
				}
				else
				{
					cout << "ERROR \n";
					cout << "Ingrese una cantidad de ingredientes extras mayor o igual a 0 \n";
					cout << endl;
					n1 = 2;

				}



			} while (n1 == 2);

		}
		else
		{
			cout << "ERROR \n";
			cout << "Ingrese un di" << char(160) << "mero mayor a 0 \n";
			cout << endl;
			n1 = 1;
		}
	} while (n1 == 1);
	_getch();
}