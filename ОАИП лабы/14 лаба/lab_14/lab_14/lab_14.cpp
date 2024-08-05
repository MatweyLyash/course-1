#include <iostream>
#include <chrono>
#include "Header.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	int size;
	cout << "Введите размер хеш-таблицы: "; cin >> size;

	HashTable<int, int> table(size);
	int choice = 0, value, key;

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
			cout << "Введите данные: "; cin >> value;
			cout << "Введите ключ: "; cin >> key;
			table.insert(value, key);
			break;
		}
		case 2:
		{
			cout << "Введите ключ элемента, который подлежит удалению: "; cin >> key;
			table.remove(key);
			break;
		}
		case 3:
		{
			cout << "Введите ключ искомого элемента: "; cin >> key;
			cout << "Данные элемента с ключом " << key << ": ";
			auto start = std::chrono::high_resolution_clock::now();
			table.getValue(table.search(key));
			auto end = std::chrono::high_resolution_clock::now();
			auto duration = std::chrono::duration_cast<std::chrono::nanoseconds>(end - start);

			cout << table.getValue(table.search(key)) << endl;
			cout << "Время поиска при модульном хешировании в наносекундах: " << duration.count() << endl;

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