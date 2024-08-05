#include "GetUtf8.h"
#include <iostream>
#include<stdio.h>
#include <windows.h>

char getUtf8(char symbol_1, char symbol_2, char symbol_3, char symbol_4)
{
	using namespace std;
	 
	setlocale(LC_ALL, "866");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "Код символа " << symbol_1 << " : " << "0x" << hex << int(symbol_1) << endl;
	cout << "Код символа " << symbol_2 << " : " << "0x" << hex << int(symbol_2) << endl;
	cout << "Код символа " << symbol_3 << " : " << "0x" << hex << int(symbol_3) << endl;
	cout << "Код символа " << symbol_4 << " : " << "0x" << hex << int(symbol_4) << endl;
	return 0;
}