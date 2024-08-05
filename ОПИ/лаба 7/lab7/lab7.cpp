#include <iostream>
#include<stdio.h>
#include <windows.h>
#include "GetUtf8.h"

int main()
{
	using namespace std;
	char symbol_1, symbol_2, symbol_3, symbol_4;

	setlocale(LC_ALL, "866");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout << "Введите 4 символа: " << endl; 
	cin >> symbol_1; 
	cin >> symbol_2;
	cin >> symbol_3;
	cin >> symbol_4;
	getUtf8(symbol_1, symbol_2, symbol_3, symbol_4);

}