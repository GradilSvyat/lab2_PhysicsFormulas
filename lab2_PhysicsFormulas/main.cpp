#include <iostream>
#include "functions.h"

using namespace std;

int main()
{
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
        cout << "������� ��������� p � ����������� �� ���������� ����" << endl;

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
        cout << "������� ������ ������ �������� h � ������" << endl;

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
        cout << "������� ����� � � ����������� " << endl;

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

    case 0:
        break; // ��������� ������

    default:
        cout << "� �� ���� ����� �����" << endl;

        goto link; //������������ � ������ �������

        break;
    }
return 0;
}
