//Ej5 hoja1 punteros y funciones

#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace System;
using namespace std;


void DibujaCuadrado()
{
	
	for (int j = 1; j < 3; j++)
	{
		Console::ForegroundColor = ConsoleColor::Gray;
		for (int i = 1; i < 6; i++)
		{
			cout << "  ";
		}
		for (int i = 1; i < 3; i++)
		{
			cout << char(254) << " ";
		}
		cout << endl;
	}
	for (int j = 3; j < 5; j++)
	{
		for (int i = 1; i < 4; i++)
		{
			cout << "  ";
		}
		for (int i = 1; i < 7; i++)
		{
			cout << char(254) << " ";
		}
		cout << endl;
	}
	for (int j = 5; j < 7; j++)
	{
		for (int i = 1; i < 2; i++)
		{
			cout << "  ";
		}
		for (int i = 1; i < 11; i++)
		{
			cout << char(254) << " ";
		}
		cout << endl;
	}

	for (int j = 7; j < 8; j++)
	{
		Console::ForegroundColor = ConsoleColor::DarkYellow;
		for (int i = 1; i < 3; i++)
		{
			cout << "  ";
		}
		for (int i = 1; i < 9; i++)
		{
			cout << char(254) << " ";
		}
		cout << endl;
	}
	for (int j = 8; j < 10; j++)
	{
		for (int i = 1; i < 3; i++)
		{
			cout << "  ";
		}
		for (int i = 1; i < 9; i++)
		{
			if (i == 2 || i == 3 || i ==6 || i ==7)
			{
				Console::ForegroundColor = ConsoleColor::DarkGreen;
				cout << char(254) << " ";
			}
			else
			{
				Console::ForegroundColor = ConsoleColor::DarkYellow;
				cout << char(254) << " ";
			}
		}
		cout << endl;
	}
	for (int j = 10; j < 13; j++)
	{
		for (int i = 1; i < 3; i++)
		{
			cout << "  ";
		}
		for (int i = 1; i < 9; i++)
		{
			if (i == 4 || i == 5)
			{
				Console::ForegroundColor = ConsoleColor::Blue;
				cout << char(254) << " ";
			}
			else
			{
				Console::ForegroundColor = ConsoleColor::DarkYellow;
				cout << char(254) << " ";
			}
		}
		cout << endl;
	}
	
}
int main()
{
	DibujaCuadrado();

	_getch();

}