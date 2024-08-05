#include<iostream>
#include"Header.h"
using namespace std;
int main() {
	setlocale(LC_ALL, "");
	cout << "1 - ѕростой калькул€тор дл€ работы с целыми числами (арифметические операции)." << endl;
	cout << "2 -  алькул€тор дл€ работы со строками (сравнение строк, поиск подстроки в строке, замена подстроки в строке, счетчик гласных в строке)." << endl;
	cout << "3 - –асписание зан€тий на заданный день." << endl;
	cout << "4 - ѕредставление числа в системах счислени€: двоичной, восьмеричной, дес€тичной, шестнадцатеричной." << endl;
	int choice;
	cin >> choice;
	switch (choice)
	{
	case 1: {
		calculator();
		break;
	}
	case 2: {
		string_calculator();
		break;
	}
	case 3: {
		tablelist();
		break;
	}
	case 4: {
		bit_calculator();
		break;
	}
	default:
		cout << "ќшибочный ввод";
		break;
	}
}