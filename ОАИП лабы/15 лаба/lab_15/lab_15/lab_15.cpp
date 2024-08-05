#include <iostream>
#include <string>
#include <Windows.h>
#include "Header.h"

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
			cout << "Введите номер маршрута: "; cin >> num;
			cin.ignore();
			cout << "Введите маршрут: "; getline(cin, str);
			marsh marsh(num, str);
			table.insert(marsh, num);
			break;
		}
		case 2:
		{
			cout << "Введите номер маршрута, который будет удалён: "; cin >> num;
			table.remove(num);
			break;
		}
		case 3:
		{
			cout << "Введите номер искомого маршрута: "; cin >> num;
			cout << "Данные этого маршрута: " << num << ": " << endl;
			table.printNode(table.search(num));
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