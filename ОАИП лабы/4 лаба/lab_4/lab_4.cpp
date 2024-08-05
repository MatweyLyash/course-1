#include <iostream>
#include <string>
#include <Windows.h>
#include <fstream>
 
#define SIZE 5

using namespace std;

struct STOCK	
{
	string name;
	string cost;
	string number;
	string allowance;

	void input()
	{
		cin.ignore();
		cout << "Введите наименование товара:" << endl;
		getline(cin, name);
		cout << "Введите цену товара:" << endl;
		getline(cin,cost);
		cout << "Введите кол-во товара:" << endl;
		getline(cin, number);
		cout << "Введите надбавочную стоимость товара:" << endl;
		getline(cin, allowance);
	}
	
	void output()
	{
		cout << "Наименование: " << name << endl;
		cout << "Цена: " << cost << endl;
		cout << "Кол-во: " << number << endl;
		cout << "Надбавочная стоимость: " << allowance << endl;
	}

	void del()
	{
		name = "";
		cost = "";
		number = "";
		allowance = "";
	}

	bool search(string price)
	{
		bool flag = false;

		if (this->cost == price)//косвенное обращение к косту
		{
			flag = true;
		}
		
		return flag;
	}

	void inputToFile()
	{
		fstream file;
		file.open("file.txt", fstream::app);//для записи без удаления предыдущего(добавление в конец файла)

		if (!file.is_open())
		{
			cout << "Файл не открыт(";
			exit(1);
		}

		cin.ignore();
		cout << "Введите наименование товара:" << endl;
		getline(cin, name);
		cout << "Введите цену товара:" << endl;
		getline(cin, cost);
		cout << "Введите кол-во товара:" << endl;
		getline(cin, number);
		cout << "Введите надбавочную стоимость товара:" << endl;
		getline(cin, allowance);

		file << name << endl;
		file << cost << endl;
		file << number << endl;
		file << allowance << endl;
		file << endl;
		file.close();
	}

	void outputOfFile()
	{
		fstream file;
		file.open("file.txt", fstream::in);//формат для чтения

		if (!file.is_open())
		{
			cout << "Файл не открыт(";
			exit(1);
		}
		
		getline(file, name);
		getline(file, cost);
		getline(file, number);
		getline(file, allowance);
		output();
	}
};

int main()
{
	setlocale(LC_CTYPE, "RUS");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	STOCK element[SIZE];
	int choice = 0;

	do {
		cout << "Введите вариант:" << endl;
		cout << "1 - запись" << endl;
		cout << "2 - чтение" << endl;
		cout << "3 - удаление" << endl;
		cout << "4 - поиск" << endl;
		cout << "5 - запись в файл" << endl;
		cout << "6 - чтение из файла" << endl;
		cout << "7 - выход" << endl;

		cin >> choice;
		int num;
		switch (choice)
		{
		case 1:
		{
			cout << "Введите номер пустой ячейки" << endl;
			cin >> num;
			element[num - 1].input();
			break;
		}
		case 2:
		{
			cout << "Введите номер ячейки, которую хотите вывести" << endl;
			cin >> num;
			element[num - 1].output();
			break;

		}
		case 3:
		{
			cout << "Введите номер ячейки, которую хотите удалить" << endl;
			cin >> num;
			element[num - 1].del();
			break;
		}
		case 4:
		{
			cout << "Введите цену" << endl;
			string price;
			cin >> price;
			bool flag = false;

			for (int i = 0; i < SIZE; i++)
			{
				if (element[i].search(price))
				{
					element[i].output();
					flag = true;
					break;
				}
			}
			if (!flag)
			{
				cout << "Товар не найден." << endl;

			}
			break;
		}
		case 5:
		{
			element[4].inputToFile();
			break;

		}
		case 6:
		{
			element[4].outputOfFile();
			break;

		}
		}

	} while (choice != 7);
}