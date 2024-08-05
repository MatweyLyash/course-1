#include <iostream>
#include <string>
#include <Windows.h>
#include "Header.h"
#include <chrono>
#define INT_MAX 32767
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int size;
	cout << "Введите размер хеш-таблицы: "; cin >> size;
	HashTable<marsh, int> table(size);
	int choice = 0, num;
	string str;

	while (true)
	{
		cout << "Выберите вариант:" << endl;
		cout << "1 - Добавить элемент в хеш-таблицу" << endl;
		cout << "2 - Удалить элемент из хеш-таблицы" << endl;
		cout << "3 - Поиск элемента в хеш-таблице" << endl;
		cout << "4 - Вывод хеш-таблицы" << endl;
		cout << "0 - Выход" << endl;
		cin >> choice;

		switch (choice)
		{
		case 1:
		{
			cout << "Введите номер телефона: "; cin >> num;
			cin.ignore();
			cout << "Введите ФИО владельца: "; getline(cin, str);
			marsh marsh(num, str);
			table.insert(marsh, num);
			break;
		}
		case 2:
		{
			cout << "Введите номер телефона владельца, который будет удалён: "; cin >> num;
			table.remove(num);
			break;
		}
		case 3:
		{
			cout << "Введите номер искомого владельца: "; cin >> num;
			cout << "Данные этого владельца: " << num << ": " << endl;
			auto start = chrono::high_resolution_clock::now();

			table.printNode(table.search(num));
			auto stop = chrono::high_resolution_clock::now();
			auto duration = std::chrono::duration_cast<std::chrono::nanoseconds>(stop - start);

			cout << "\nВремя в наносекундах: " << duration.count();
			break;
		}
		case 4:
		{
			cout << "Хеш-таблица:" << endl;
			table.print();
			break;
		}
		case 0:
		{
			return 0;
		}
		default:
			break;
		}
	}
}