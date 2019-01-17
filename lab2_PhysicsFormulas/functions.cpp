#pragma once
#include <iostream>
#include <string>
#include <windows.h>
#include <vector>
#include "functions.h"

using namespace std;
const double G = 9.80665; //константа ускорения свободного падения

string density = "Введите плотность в граммах на кубический метр";
string height = "Введите высоту столба жидкости в метрах";
string weight = "Введите массу в граммах ";
string speed0 = "Введите первичную скорость тела в метрах в секунду ";
string speed = "Введите конечную скорость тела в метрах в секунду ";
string speed1 = "Введите скорость тела в метрах в секунду ";
string time = "Введите время в секундах";

vector <string> start_menu =
{
	"Выбирите формулу",
	"Давление на глубине жидкости",
	"Сила тяжести",
	"Ускорение",
	"Кинетическая энергия тела",
	"Завершить роботу программы"
};
void format(int color)
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, color);
}
void Print_menu(const int formula_selection)
{
	format(BACKGROUND_RED | BACKGROUND_INTENSITY | BACKGROUND_GREEN | FOREGROUND_GREEN | FOREGROUND_BLUE);
	cout << start_menu[0] << endl;
	for (int i = 1; i < 6; ++i)
	{
		if (i == formula_selection)
		{
			format(BACKGROUND_BLUE | BACKGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
			cout << start_menu[i] << endl;
			continue;
		}
		format(FOREGROUND_BLUE | FOREGROUND_INTENSITY);
		cout << start_menu[i] << endl;
	}
}
void Pressure_fluid() //Расчёт формулы давления жидкости
{
	cout << "Вы выбрали\"Давление на глубине жидкости\"" << endl;
	double p;
	inputValue(p, density);
	double h;
	inputValue(h, height);
	cout << "Давление на глубине жидкости = " << G*p*h << " Па" << endl << endl;
}
void Force_gravity() //Расчёт формулы силы тяжести
{
	cout << "Вы выбрали\"Сила тяжести\"" << endl;
	double m;
	inputValue(m, weight);
	cout << "Сила тяжести = " << m*G << " Н" << endl << endl;
}
void acceleration() //Расчёт формулы ускорения
{
	cout << "Вы выбрали\"Ускорение\"" << endl;
	double v0;
	inputValue(v0, speed0);
	double v;
	inputValue(v, speed);
	double t;
	inputValue(t, time);
	while (!(t > 0))
	{
		inputValue(t, time);
		cout << "Время не может быть меньше или равно нулю!" << endl;
	}
	double dv = v - v0; //дельта скорости
	cout << "Ускорение = " << dv / t << " м/с2" << endl << endl;
}
void Eenergy_kinetic() //Расчёт формулы кинетической энергии тела
{
	cout << "Вы выбрали\"Кинетическая энергия тела\"" << endl;
	double m1;
	inputValue(m1, weight);
	double v1;
	inputValue(v1, speed1);
	cout << "Кинетическая энергия тела = " << (m1*v1*v1) / 2 << " Дж" << endl << endl;
}
void inputValue(double &value, const string str)
{
	bool correct = false;
	while (!correct)
	{
		cout << str << endl;
		cin >> value;
		if (cin.fail()) //проверка на корректность ввода
		{
			cin.clear();
			cin.ignore(255, '\n');
			cout << "Введите цыфру!!!" << endl << endl;
			correct = false;
		}
		else
		{
			cin.ignore();
			correct = true;
		}
	}
}
