#include<stdio.h>
#include <windows.h>
#include "getcase.h"
#include <string>

using namespace std;
int getCase_1() {
	char symbol_1;
	char symbol_2;
	unsigned int coefficient;

	cout << "Введите букву в прописном написании: \n";
	cin >> symbol_1;
	cout << "Введите букву в строчном написании: \n"; 
	cin >> symbol_2;

	if (65 <= symbol_1 && symbol_1 <= 90 && 97 <= symbol_2 && symbol_2 <= 122) {
		coefficient = int(symbol_2) - int(symbol_1);
		if (coefficient != 32) {
			cout << "Ошибочный ввод" << endl;

		}
		cout << "Код вашего символа:" << "0x" << hex << int(symbol_1) << endl;
		cout << "Код вашего символа:" << "0x" << hex << int(symbol_2) << endl;


		if (coefficient == 32) {
			cout << "Разница между кодами: " << coefficient << endl;
		}
	}
	return(0);
}
int getCase_2() {
	char symbol_1;
	char symbol_2; 
	unsigned int coefficient;
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout << "Введите букву в прописном написании: \n";
	cin >> symbol_1;
	cout << "Введите букву в строчном написании: \n";
	cin >> symbol_2;
	if (-64 <= symbol_1 && symbol_1 <= -33 && -32 <= symbol_2 && symbol_2 <= -1) {
		coefficient = int(symbol_2) - int(symbol_1);
		if (coefficient != 32) {
			cout << "Ошибочный ввод" << endl;
		}
		cout << "Код вашего символа:" << "0x" << hex << int(symbol_1) << endl;
		cout << "Код вашего символа:" << "0x" << hex << int(symbol_2) << endl;
		if (coefficient == 32) {
			cout << "Разница между кодами: " << coefficient << endl;
		}
	}
	return(0);
}
int getCase_3()
{
	char number;
	cout << "Введите цифру :";
	cin >> number;
	if (48 <= number && number <= 57) {
		cout << "Код символа = " << "0x" << hex << int(number) << endl;
	}
	else {
		cout << "Ошибочный ввод" << endl;
	}
	return(0);
}
