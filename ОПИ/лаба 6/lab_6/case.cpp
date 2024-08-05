#include<stdio.h>
#include <windows.h>
#include "case.h"

using namespace std;
void case1(int c) {
	cout << "Введите букву в прописном написании: \n";
	for (int i = 1; i < 8; i++) {
		cin >> c;

		if (65 <= c && c <= 90) {
			cout << "Разница между кодами: " << "32" << endl;
			cout << "Код вашего символа:" << "0x" << int(c) << endl;
		}
		else if (97 <= c && c <= 122) {
			cout << "Разница между кодами: " << "32" << endl;
			cout << "Код вашего символа:" << "0x" << int(c) << endl;
		}

		else {
			cout << "Ошибочный ввод" << endl;
		}
	}
}
void case2(int c) {
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
}