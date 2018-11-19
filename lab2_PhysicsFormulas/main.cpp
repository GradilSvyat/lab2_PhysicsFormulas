#include <iostream>

using namespace std;

const double G = 9.80665; //константа ускорения свободного падения

void Start_print ()
{
    cout << "Выбирите формулу" << endl << endl;
    cout << "\"Давление на глубине жидкости\" \t- введите 1" << endl;
    cout << "\"Сила тяжести\" \t\t\t- введите 2" << endl;
    cout << "\"Ускорение\" \t\t\t- введите 3" << endl;
    cout << "Завершить роботу программы \t- введите 0" << endl << endl;
}
double P (double p, double h) //Расчёт формулы давления жидкости
{
    return G*p*h;
}

double F (double m) //Расчёт формулы силы тяжести
{
    return m*G;
}

double a (double v0, double v, double t) //Расчёт формулы ускорения
{
    double dv = v - v0; //дельта скорости
    return dv/t;
}




int main()
{
    setlocale(LC_ALL, "rus");

    int formula_selection;

    link: //возврат к этому месту при некорректном вводе

    Start_print ();

    cin >> formula_selection;

    if (cin.fail()) //проверка на корректность ввода
    {
        cin.clear();
        cin.ignore();
    }
    switch (formula_selection)
    {
    case 1:
        cout << "Вы выбрали\"Давление на глубине жидкости\"" << endl;

        cout << "Введите плотность p в килограммах на кубический метр" << endl;

        int p;

        cin >> p;
            if (cin.fail()) //проверка на корректность ввода
    {
                cin.clear();
                cin.ignore();
    }
        cout << "Введите высоту столба жидкости h в метрах" << endl;

        int h;

        cin >> h;
            if (cin.fail()) //проверка на корректность ввода
    {
                cin.clear();
                cin.ignore();
   }
        cout << "Давление на глубине жидкости = " << P(p, h) << " Па" << endl << endl;

        goto link; //возвращаемся к выбору формулы

        break;


    case 2:
        cout << "Вы выбрали\"Сила тяжести\"" << endl;
        cout << "Введите массу м в килограммах " << endl;

        int m;

        cin >> m;
            if (cin.fail()) //проверка на корректность ввода
    {
                cin.clear();
                cin.ignore();
    }
        cout << "Сила тяжести = " << F(m) << " Н" << endl << endl;

        goto link; //возвращаемся к выбору формулы

        break;

    case 3:
        cout << "Вы выбрали\"Ускорение\"" << endl;

        cout << "Введите первичную скорость тела в метрах в секунду " << endl;

        int v0;

        cin >> v0;
            if (cin.fail()) //проверка на корректность ввода
    {
                cin.clear();
                cin.ignore();
    }
    cout << "Введите конечную скорость тела в метрах в секунду " << endl;

        int v;

        cin >> v;
            if (cin.fail()) //проверка на корректность ввода
    {
                cin.clear();
                cin.ignore();
    }
    cout << "Введите время в секундах" << endl;

        int t;

        cin >> t;
            if (cin.fail()) //проверка на корректность ввода
    {
                cin.clear();
                cin.ignore();
    }
        cout << "Ускорение = " << a(v0, v, t) << " м/с2" << endl << endl;

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
