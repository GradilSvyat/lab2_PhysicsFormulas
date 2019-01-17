#pragma once
#include <string>

using namespace std;

void Print_menu(const int formula_selection);
void format(int color);
void Pressure_fluid(); //Расчёт формулы давления жидкости
void Force_gravity(); //Расчёт формулы силы тяжести
void acceleration(); //Расчёт формулы ускорения
void Eenergy_kinetic(); //Расчёт формулы кинетической энергии тела
void inputValue(double &value, const string str); //проверка ввода в формуле
