#include <iostream>
#include "functions.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");

    int formula_selection;

    link: //������� � ����� ����� ��� ������������ �����

    Start_print ();

    cin >> formula_selection;

    if (cin.fail()) //�������� �� ������������ �����
    {
        cin.clear();
        cin.ignore();
    }
    switch (formula_selection)
    {
    case 1:
        cout << "�� �������\"�������� �� ������� ��������\"" << endl;

        cout << "������� ��������� p � ����������� �� ���������� ����" << endl;

        int p;

        cin >> p;
            if (cin.fail()) //�������� �� ������������ �����
    {
                cin.clear();
                cin.ignore();
    }
        cout << "������� ������ ������ �������� h � ������" << endl;

        int h;

        cin >> h;
            if (cin.fail()) //�������� �� ������������ �����
    {
                cin.clear();
                cin.ignore();
    }
        cout << "�������� �� ������� �������� = " << P(p, h) << " ��" << endl << endl;

        goto link; //������������ � ������ �������

        break;


    case 2:
        cout << "�� �������\"���� �������\"" << endl;
        cout << "������� ����� � � ����������� " << endl;

        int m;

        cin >> m;
            if (cin.fail()) //�������� �� ������������ �����
    {
                cin.clear();
                cin.ignore();
    }
        cout << "���� ������� = " << F(m) << " �" << endl << endl;

        goto link; //������������ � ������ �������

        break;

    case 3:
        cout << "�� �������\"���������\"" << endl;

        cout << "������� ��������� �������� ���� � ������ � ������� " << endl;

        int v0;

        cin >> v0;
            if (cin.fail()) //�������� �� ������������ �����
    {
                cin.clear();
                cin.ignore();
    }
    cout << "������� �������� �������� ���� � ������ � ������� " << endl;

        int v;

        cin >> v;
            if (cin.fail()) //�������� �� ������������ �����
    {
                cin.clear();
                cin.ignore();
    }
    cout << "������� ����� � ��������" << endl;

        int t;

        cin >> t;
            if (cin.fail()) //�������� �� ������������ �����
    {
                cin.clear();
                cin.ignore();
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
