#pragma once
#include <string>

using namespace std;

void Print_menu(const int formula_selection);
void format(int color);
void Pressure_fluid(); //������ ������� �������� ��������
void Force_gravity(); //������ ������� ���� �������
void acceleration(); //������ ������� ���������
void Eenergy_kinetic(); //������ ������� ������������ ������� ����
void inputValue(double &value, const string str); //�������� ����� � �������
