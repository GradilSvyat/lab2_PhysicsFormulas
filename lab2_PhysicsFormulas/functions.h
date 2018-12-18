#pragma once
#include <string>

using namespace std;

void Print_menu(const int formula_selection);
void format(int color);
void P(); //Расчёт формулы давления жидкости
void F(); //Расчёт формулы силы тяжести
void a(); //Расчёт формулы ускорения
void Ek(); //Расчёт формулы кинетической энергии тела
void inputValue(double &value, const string str); //проверка ввода в формуле
