#pragma once
#include <string>

using namespace std;

void Start_print();
double P(double p, double h); //������ ������� �������� ��������
double F(double m); //������ ������� ���� �������
double a(double v0, double v, double t); //������ ������� ���������
double Ek(double m1, double v1); //������ ������� ������������ ������� ����
void inputValue(double &value, const string str); //�������� ����� � �������
void inputValue(int &value); //�������� ����� ��� ������ �������
