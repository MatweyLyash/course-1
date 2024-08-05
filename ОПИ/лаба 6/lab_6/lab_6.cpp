#include <iostream>
#include<stdio.h>
#include "case.h"
#include <windows.h>
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "Russian");
	int a; char c;
	printf("1 – определение разницы значений кодов в ASCII буквы в прописном и строчном написании,\n если введен символ латинского алфавита\0");
	printf("\n2 – определение разницы значений кодов в Windows - 1251 буквы в прописном и строчном написании,\n если введен символ русского алфавита;");
	printf("\n3 – вывод в консоль кода символа, соответствующего введенной цифре;");
	printf("\n4 – выход из программы.");
	printf("\n----------------------------------------------------------------------------------------------");
	printf("\nВведите вариант = ");
	cin >> a;
	switch (a)
    case 1: {
		case1(c);

		if (c) { break; };

	case 2: {
		SetConsoleCP(1251);
		SetConsoleOutputCP(1251);
		char c;
		cout << "Введите символ кириллицы :"; // -64 -33
		cin >> c;// -32 -1
		if (-64 <= c && c <= -33) {
			cout << "0x" << hex << int(c) << endl;
			cout << "Разница между кодами :" << "32" << endl;
		}
		else if (-32 <= c && c <= -1) {
			cout << "0x" << hex << int(c) << endl;
			cout << "Разница между кодами :" << "32" << endl;
		}
		else {
			cout << "Ошибочный ввод" << endl;
		}
	}
		  break;
	case 3:
		cout << "Введите цифру :"; cin >> c;
		if (48 <= c && c <= 57) {
			cout << "Код символа = " << "0x" << hex << int(c) << endl;
		}
		else {
			cout << "Ошибочный ввод" << endl;
		}
		break;
	case 4:
		return(0);
	}
}