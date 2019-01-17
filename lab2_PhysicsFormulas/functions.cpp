#pragma once
#include <iostream>
#include <string>
#include <windows.h>
#include <vector>
#include "functions.h"

using namespace std;
const double G = 9.80665; //��������� ��������� ���������� �������

string density = "������� ��������� � ������� �� ���������� ����";
string height = "������� ������ ������ �������� � ������";
string weight = "������� ����� � ������� ";
string speed0 = "������� ��������� �������� ���� � ������ � ������� ";
string speed = "������� �������� �������� ���� � ������ � ������� ";
string speed1 = "������� �������� ���� � ������ � ������� ";
string time = "������� ����� � ��������";

vector <string> start_menu =
{
	"�������� �������",
	"�������� �� ������� ��������",
	"���� �������",
	"���������",
	"������������ ������� ����",
	"��������� ������ ���������"
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
void Pressure_fluid() //������ ������� �������� ��������
{
	cout << "�� �������\"�������� �� ������� ��������\"" << endl;
	double p;
	inputValue(p, density);
	double h;
	inputValue(h, height);
	cout << "�������� �� ������� �������� = " << G*p*h << " ��" << endl << endl;
}
void Force_gravity() //������ ������� ���� �������
{
	cout << "�� �������\"���� �������\"" << endl;
	double m;
	inputValue(m, weight);
	cout << "���� ������� = " << m*G << " �" << endl << endl;
}
void acceleration() //������ ������� ���������
{
	cout << "�� �������\"���������\"" << endl;
	double v0;
	inputValue(v0, speed0);
	double v;
	inputValue(v, speed);
	double t;
	inputValue(t, time);
	while (!(t > 0))
	{
		inputValue(t, time);
		cout << "����� �� ����� ���� ������ ��� ����� ����!" << endl;
	}
	double dv = v - v0; //������ ��������
	cout << "��������� = " << dv / t << " �/�2" << endl << endl;
}
void Eenergy_kinetic() //������ ������� ������������ ������� ����
{
	cout << "�� �������\"������������ ������� ����\"" << endl;
	double m1;
	inputValue(m1, weight);
	double v1;
	inputValue(v1, speed1);
	cout << "������������ ������� ���� = " << (m1*v1*v1) / 2 << " ��" << endl << endl;
}
void inputValue(double &value, const string str)
{
	bool correct = false;
	while (!correct)
	{
		cout << str << endl;
		cin >> value;
		if (cin.fail()) //�������� �� ������������ �����
		{
			cin.clear();
			cin.ignore(255, '\n');
			cout << "������� �����!!!" << endl << endl;
			correct = false;
		}
		else
		{
			cin.ignore();
			correct = true;
		}
	}
}
