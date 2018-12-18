#include <iostream>
#include <conio.h>
#include "functions.h"
using namespace std;

int main()
{
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
				P();
				system("PAUSE");
				break;
			case 2:
				F();
				system("PAUSE");
				break;
			case 3:
				a();
				system("PAUSE");
				break;
			case 4:
				Ek();
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
}


