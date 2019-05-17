//Ej4 hoja1 punteros y funciones

#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace System;
using namespace std;


void DibujaCuadrado()
{
	int n1;
	int x;
	int y;
	int a; //ancho del rectángulo
	int h; //alto del rectángulo
	int co; //color del rectángulo
	char c;

	cout << "Ingrese el car" << char(160) << "cter: ";
	cin >> c;
	cout << endl;

	cout << "Ingrese el ancho del rect"<< char(160)<<"ngulo: ";
	cin >> a;
	cout << endl;

	cout << "Ingrese el alto del rect" << char(160) << "ngulo: ";
	cin >> h;
	cout << endl;

	cout << "Ingrese las coordenadas X y Y" << endl;
	cout << "=======================================" << endl;
	cout << "Coordenada X: ";
	cin >> x;
	cout << "Coordenada Y: ";
	cin >> y;

	cout << "Ingrese el color del rect" << char(160) << "ngulo" << endl;
	cout << "======================================================" << endl;
	cout << "Azul: 0\n";
	cout << "Rojo: 1\n";
	cout << "Verde: 2\n";
	cout << "Amarillo: 3\n";
	cout << "P" << char(163) << "rpura: 4 \n";
	cout << "Gris: 5\n";
	cout << "Blanco: 6\n";
	cout << endl;

	do
	{
		cout << "Ingrese el color: ";
		cin >> co;

		if (co == 0)
		{
			Console::ForegroundColor = ConsoleColor::Blue;
			n1 = 2;
		}
		else
		{
			if (co == 1)
			{
				Console::ForegroundColor = ConsoleColor::Red;
				n1 = 2;
			}
			else
			{
				if (co == 2)
				{
					Console::ForegroundColor = ConsoleColor::Green;
					n1 = 2;
				}
				else
				{
					if (co == 3)
					{
						Console::ForegroundColor = ConsoleColor::Yellow;
						n1 = 2;
					}
					else
					{
						if (co == 4)
						{
							Console::ForegroundColor = ConsoleColor::DarkMagenta;
							n1 = 2;
						}
						else
						{
							if (co == 5)
							{
								Console::ForegroundColor = ConsoleColor::Gray;
								n1 = 2;
							}
							else
							{
								if (co == 6)
								{
									Console::ForegroundColor = ConsoleColor::White;
									n1 = 2;
								}
								else
								{
									cout << endl;
									cout << "ERROR \n";
									cout << "Debe ingresar uno de los colores ofrecidos";
									cout << endl;

									n1 = 1;
									
								}
							}

						}
					}
				}
			}

		}
	} while (n1 == 1);

	for (int j = 1; j <= y; j++)
	{
		cout << endl;

	}
	for (int j = 1; j <= h; j++)
	{

		for (int i = 1; i <= x; i++)
		{
			cout << "  ";
		}
		for (int i = 1; i <= a; i++)
		{
			cout << " " << c;
		}

		cout << endl;

	}

}

int main()
{

	DibujaCuadrado();

	_getch();

}