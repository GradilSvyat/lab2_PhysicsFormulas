﻿#include <iostream>
#include <conio.h>
#include "functions.h"
<<<<<<< HEAD

=======
>>>>>>> consol_menu
using namespace std;

int main()
{
<<<<<<< HEAD
    setlocale(LC_ALL, "rus");
    int formula_selection;
    link: //������� � ����� ����� ��� ������������ ����� ��� �� ���������� ����������
    Start_print ();
	cin >> formula_selection;
	//if (cin.fail()) cin.clear();
		if (cin.fail()) //�������� �� ������������ �����
		{
			cin.clear();
			cin.ignore();
			cout << "������� �����!!!" << endl << endl;
			goto link;
		}
    switch (formula_selection)
    {
    case 1:
        cout << "�� �������\"�������� �� ������� ��������\"" << endl;
		link1: //������� � ����� ����� ��� ������������ ����� ���������
        cout << "������� ��������� � ����������� �� ���������� ����" << endl;
        double p;
        cin >> p;
		if (cin.fail()) //�������� �� ������������ �����
		{
                cin.clear();
                cin.ignore();
				cout << "������� �����!!!" << endl << endl;
				goto link1;
		}
		link2: //������� � ����� ����� ��� ������������ ����� ������ ��������
        cout << "������� ������ ������ �������� � ������" << endl;
        double h;
        cin >> h;
		if (cin.fail()) cin.clear();
        if (cin.fail()) //�������� �� ������������ �����
		{
                cin.clear();
                cin.ignore();
				cout << "������� �����!!!" << endl << endl;
				goto link2;
		}
        cout << "�������� �� ������� �������� = " << P(p, h) << " ��" << endl << endl;
        goto link; //������������ � ������ �������
        break;
    case 2:
        cout << "�� �������\"���� �������\"" << endl;
		link3: //������� � ����� ����� ��� ������������ ����� �����
        cout << "������� ����� � ����������� " << endl;
        double m;
        cin >> m;
            if (cin.fail()) //�������� �� ������������ �����
			{
                cin.clear();
                cin.ignore();
				cout << "������� �����!!!" << endl << endl;
				goto link3;
			}
        cout << "���� ������� = " << F(m) << " �" << endl << endl;
        goto link; //������������ � ������ �������
		break;
	case 3:
        cout << "�� �������\"���������\"" << endl;
		link4: //������� � ����� ����� ��� ������������ ����� ��������� ��������
        cout << "������� ��������� �������� ���� � ������ � ������� " << endl;
        double v0;
        cin >> v0;
            if (cin.fail()) //�������� �� ������������ �����
			{
                cin.clear();
                cin.ignore();
				cout << "������� �����!!!" << endl << endl;
				goto link4;
			}
			link5: //������� � ����� ����� ��� ������������ ������������� ��������
		cout << "������� �������� �������� ���� � ������ � ������� " << endl;
        double v;
        cin >> v;
            if (cin.fail()) //�������� �� ������������ �����
			{
                cin.clear();
                cin.ignore();
				cout << "������� �����!!!" << endl << endl;
				goto link;
			}
			link6: //������� � ����� ����� ��� ������������ ����� �������
		cout << "������� ����� � ��������" << endl;
        double t;
        cin >> t;
            if (cin.fail()) //�������� �� ������������ �����
			{
                cin.clear();
                cin.ignore();
				cout << "������� �����!!!" << endl << endl;
				goto link6;
			}
        cout << "��������� = " << a(v0, v, t) << " �/�2" << endl << endl;
        goto link; //������������ � ������ �������
        break;
	case 4:
		cout << "�� �������\"������������ ������� ����\"" << endl;
		link7: //������� � ����� ����� ��� ������������ ����� �����
		cout << "������� ����� � ����������� " << endl;
		double m1;
		cin >> m1;
		if (cin.fail()) //�������� �� ������������ �����
		{
			cin.clear();
			cin.ignore();
			cout << "������� �����!!!" << endl << endl;
			goto link7;
		}
		link8: //������� � ����� ����� ��� ������������ ����� ������ ��������
		cout << "������� ������ ������ �������� h � ������" << endl;
		double v1;
		cin >> v1;
		if (cin.fail()) cin.clear();
		if (cin.fail()) //�������� �� ������������ �����
		{
			cin.clear();
			cin.ignore();
			cout << "������� �����!!!" << endl << endl;
			goto link8;
		}
		cout << "������������ ������� ���� = " << Ek(m1,v1) << " ��" << endl << endl;
		goto link; //������������ � ������ �������
		break;
    case 0:
        break; // ��������� ������
    default:
        cout << "� �� ���� ����� �����" << endl;
        goto link; //������������ � ������ �������
        break;
    }
return 0;
=======
	setlocale(LC_ALL, "rus");
	int formula_selection = 1;
	bool workProg = true; // объявляем переменную для условия работы цикла
	while (workProg == true)
	{
		if (formula_selection < 1) { formula_selection = 5; }
		if (formula_selection > 5) { formula_selection = 1; }
		system("cls");
		Print_menu(formula_selection);
		format(15);
		int key = _getch();
		if (key == 0 || key == 224) //некоторые клавиши возвращают не одно значение, по-этому если получаем 0 или 224 - берём второе значение
		{
			key = _getch();
		}
		switch (key)
		{
		case 13: //клавиша Enter
			switch (formula_selection)
			{
			case 1:
				Pressure_fluid();
				system("PAUSE");
				break;
			case 2:
				Force_gravity();
				system("PAUSE");
				break;
			case 3:
				acceleration();
				system("PAUSE");
				break;
			case 4:
				Eenergy_kinetic();
				system("PAUSE");
				break;
			case 5:
				workProg = false; // завершаем работу программы
				break;
			}
			break;
		case 75: // стрелочка "влево"
			--formula_selection;
			break;
		case 72: // стрелочка "вверх"
			--formula_selection;
			break;
		case 77: // стрелочка "вправо"
			++formula_selection;
			break;
		case 80: // стрелочка "вниз"
			++formula_selection;
			break;
		case 27: // клавиша "escape"
			workProg = false; // завершаем работу программы
			break;
		}
	}
	return 0;
>>>>>>> consol_menu
}


