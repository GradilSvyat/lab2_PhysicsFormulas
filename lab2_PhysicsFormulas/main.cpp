#include <iostream>
#include "functions.h"
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    int formula_selection;
    link: //возврат к этому месту при некорректном вводе или по завершении выполнения
    Start_print ();
	cin >> formula_selection;
	//if (cin.fail()) cin.clear();
		if (cin.fail()) //проверка на корректность ввода
		{
			cin.clear();
			cin.ignore();
			cout << "Введите цыфру!!!" << endl << endl;
			goto link;
		}
    switch (formula_selection)
    {
    case 1:
        cout << "Вы выбрали\"Давление на глубине жидкости\"" << endl;
		link1: //возврат к этому месту при некорректном вводе плотности
        cout << "Введите плотность в килограммах на кубический метр" << endl;
        double p;
        cin >> p;
		if (cin.fail()) //проверка на корректность ввода
		{
                cin.clear();
                cin.ignore();
				cout << "Введите цыфру!!!" << endl << endl;
				goto link1;
		}
		link2: //возврат к этому месту при некорректном вводе высоты жидкости
        cout << "Введите высоту столба жидкости в метрах" << endl;
        double h;
        cin >> h;
		if (cin.fail()) cin.clear();
        if (cin.fail()) //проверка на корректность ввода
		{
                cin.clear();
                cin.ignore();
				cout << "Введите цыфру!!!" << endl << endl;
				goto link2;
		}
        cout << "Давление на глубине жидкости = " << P(p, h) << " Па" << endl << endl;
        goto link; //возвращаемся к выбору формулы
        break;
    case 2:
        cout << "Вы выбрали\"Сила тяжести\"" << endl;
		link3: //возврат к этому месту при некорректном вводе массы
        cout << "Введите массу в килограммах " << endl;
        double m;
        cin >> m;
            if (cin.fail()) //проверка на корректность ввода
			{
                cin.clear();
                cin.ignore();
				cout << "Введите цыфру!!!" << endl << endl;
				goto link3;
			}
        cout << "Сила тяжести = " << F(m) << " Н" << endl << endl;
        goto link; //возвращаемся к выбору формулы
		break;
	case 3:
        cout << "Вы выбрали\"Ускорение\"" << endl;
		link4: //возврат к этому месту при некорректном вводе первичной скорости
        cout << "Введите первичную скорость тела в метрах в секунду " << endl;
        double v0;
        cin >> v0;
            if (cin.fail()) //проверка на корректность ввода
			{
                cin.clear();
                cin.ignore();
				cout << "Введите цыфру!!!" << endl << endl;
				goto link4;
			}
			link5: //возврат к этому месту при некорректном вводеконечной скорости
		cout << "Введите конечную скорость тела в метрах в секунду " << endl;
        double v;
        cin >> v;
            if (cin.fail()) //проверка на корректность ввода
			{
                cin.clear();
                cin.ignore();
				cout << "Введите цыфру!!!" << endl << endl;
				goto link;
			}
			link6: //возврат к этому месту при некорректном вводе времени
		cout << "Введите время в секундах" << endl;
        double t;
        cin >> t;
            if (cin.fail()) //проверка на корректность ввода
			{
                cin.clear();
                cin.ignore();
				cout << "Введите цыфру!!!" << endl << endl;
				goto link6;
			}
        cout << "Ускорение = " << a(v0, v, t) << " м/с2" << endl << endl;
        goto link; //возвращаемся к выбору формулы
        break;
	case 4:
		cout << "Вы выбрали\"Кинетическая энергия тела\"" << endl;
		link7: //возврат к этому месту при некорректном вводе массы
		cout << "Введите массу в килограммах " << endl;
		double m1;
		cin >> m1;
		if (cin.fail()) //проверка на корректность ввода
		{
			cin.clear();
			cin.ignore();
			cout << "Введите цыфру!!!" << endl << endl;
			goto link7;
		}
		link8: //возврат к этому месту при некорректном вводе высоты жидкости
		cout << "Введите высоту столба жидкости h в метрах" << endl;
		double v1;
		cin >> v1;
		if (cin.fail()) cin.clear();
		if (cin.fail()) //проверка на корректность ввода
		{
			cin.clear();
			cin.ignore();
			cout << "Введите цыфру!!!" << endl << endl;
			goto link8;
		}
		cout << "Кинетическая энергия тела = " << Ek(m1,v1) << " Дж" << endl << endl;
		goto link; //возвращаемся к выбору формулы
		break;
    case 0:
        break; // завершаем работу
    default:
        cout << "Я не знаю этого числа" << endl;
        goto link; //возвращаемся к выбору формулы
        break;
    }
return 0;
}
