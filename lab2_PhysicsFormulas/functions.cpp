#pragma once
#include <iostream>
#include "functions.h"

using namespace std;
const double G = 9.80665; //��������� ��������� ���������� �������

void Start_print()
{
	cout << "�������� �������" << endl << endl;
	cout << "\"�������� �� ������� ��������\" \t- ������� 1" << endl;
	cout << "\"���� �������\" \t\t\t- ������� 2" << endl;
	cout << "\"���������\" \t\t\t- ������� 3" << endl;
	cout << "\"������������ ������� ����\" \t- ������� 4" << endl;
	cout << "��������� ������ ��������� \t- ������� 0" << endl << endl;
}
double P(double p, double h) //������ ������� �������� ��������
{
	return G * p * h;
}
double F(double m) //������ ������� ���� �������
{
	return m * G;
}
double a(double v0, double v, double t) //������ ������� ���������
{
	double dv = v - v0; //������ ��������
	return dv / t;
}
double Ek(double m1, double v1) //������ ������� ������������ ������� ����
{
	return (m1*v1*v1)/2;
}
