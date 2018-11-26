#include <iostream>
#include <string>
#include "functions.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	string density = "Введите плотность в граммах на кубический метр";
	string height = "Введите высоту столба жидкости в метрах";
	string weight = "Введите массу в граммах ";
	string speed0 = "Введите первичную скорость тела в метрах в секунду ";
	string speed = "Введите конечную скорость тела в метрах в секунду ";
	string speed1 = "Введите скорость тела в метрах в секунду ";
	string time = "Введите время в секундах";
	bool workProg = true;
	while (workProg)
	{
		Start_print();
		int formula_selection;
		inputValue(formula_selection);
		switch (formula_selection)
		{
		case 1:
			cout << "Вы выбрали\"Давление на глубине жидкости\"" << endl;
			double p;
			inputValue(p, density);
			double h;
			inputValue(h, height);
			cout << "Давление на глубине жидкости = " << P(p, h) << " Па" << endl << endl;
			break;
		case 2:
			cout << "Вы выбрали\"Сила тяжести\"" << endl;
			double m;
			inputValue(m, weight);
			cout << "Сила тяжести = " << F(m) << " Н" << endl << endl;
			break;
		case 3:
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
			cout << "Ускорение = " << a(v0, v, t) << " м/с2" << endl << endl;
			break;
		case 4:
			cout << "Вы выбрали\"Кинетическая энергия тела\"" << endl;
			double m1;
			inputValue(m1, weight);
			double v1;
			inputValue(v1, speed1);
			cout << "Кинетическая энергия тела = " << Ek(m1, v1) << " Дж" << endl << endl;
			break;
		case 0:
			workProg = false;
			break; // завершаем работу
		default:
			cout << "Я не знаю этого числа" << endl;
			break;
		}
	}
	return 0;
}
