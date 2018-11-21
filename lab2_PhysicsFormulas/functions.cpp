#pragma once
#include <iostream>
#include "functions.h"

using namespace std;
const double G = 9.80665; //константа ускорения свободного падения

void Start_print()
{
	cout << "Выбирите формулу" << endl << endl;
	cout << "\"Давление на глубине жидкости\" \t- введите 1" << endl;
	cout << "\"Сила тяжести\" \t\t\t- введите 2" << endl;
	cout << "\"Ускорение\" \t\t\t- введите 3" << endl;
	cout << "\"Кинетическая энергия тела\" \t- введите 4" << endl;
	cout << "Завершить роботу программы \t- введите 0" << endl << endl;
}
double P(double p, double h) //Расчёт формулы давления жидкости
{
	return G * p * h;
}
double F(double m) //Расчёт формулы силы тяжести
{
	return m * G;
}
double a(double v0, double v, double t) //Расчёт формулы ускорения
{
	double dv = v - v0; //дельта скорости
	return dv / t;
}
double Ek(double m1, double v1) //Расчёт формулы кинетической энергии тела
{
	return (m1*v1*v1)/2;
}
