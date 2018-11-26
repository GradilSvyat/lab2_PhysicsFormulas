#pragma once
#include <string>

using namespace std;

void Start_print();
double P(double p, double h); //Расчёт формулы давления жидкости
double F(double m); //Расчёт формулы силы тяжести
double a(double v0, double v, double t); //Расчёт формулы ускорения
double Ek(double m1, double v1); //Расчёт формулы кинетической энергии тела
void inputValue(double &value, const string str); //проверка ввода в формуле
void inputValue(int &value); //проверка ввода при выборе формулы
