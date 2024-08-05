#include <iostream>

#include <string>
#include <Windows.h>
#define SIZE 7

using namespace std;

enum Marks
{
	 VladViber=1, VladWildberries, VladAfganistan, VladUzbekistan, VladTatarstan, VladTazhikistan, VladMagistrant
} marks;

struct AUTO
{		
	string number;
	string brande;
	string release;
	string color;
	string date;
	string carcase;
	string inspection;
	string owner;
	struct date 
	{
		unsigned int day : 5;
		unsigned int month : 4;
		unsigned int year : 11;
	}datE = { 0,0,0 };
	void input()
	{
		cin.ignore();
		cout << "Введите марку автомобиля (1 - VladViber, 2 - VladWildberries, 3 - VladAfganistan, 4 - VladUzbekistan, 5 - VladTatarstan, 6 - VladTazhikistan, 7 - VladMagistrant).(Можно сказать, машины на каждый из дней недели) " << endl;
		unsigned int choise = 0;
		cin >> choise;
		switch (choise)
		{
		case Marks::VladViber:
		{
			brande = "VladViber";
			break;
		}

		case Marks::VladWildberries:
		{
			brande = "VladWildberries";
			break;
		}
		case Marks::VladAfganistan:
		{
			brande = "VladAfganistan";
			break;
		}
		case Marks::VladUzbekistan:
		{
			brande = "VladUzbekistan";
			break;
		}
		case Marks::VladTatarstan:
		{
			brande = "VladTatarstan";
			break;
		}
		case Marks::VladTazhikistan:
		{
			brande = "VladTazhikistan";
			break;
		}
		case Marks::VladMagistrant:
		{
			brande = "VladViber";
			break;
		}
		default:
		{
			cout << "У ВАС ЕСТЬ ВЫБОР ТОЛЬКО ИЗ ПРЕДЛОЖЕННЫХ СВЕРХУ АВТОМОБИЛЕЙ" << endl;
			return;
		}
		}
		cin.ignore();
		cout << "Введите цвет автомобиля." << endl;
		getline(cin,color);
		cout << "Введите заводской номер автомобиля." << endl;
		getline(cin, release);
		cout << "Введите дату выпуска авто в формате ДД ММ ГГГГ (там, где пробел, имеется в виду Enter) " << endl;
		unsigned int day = 0, month = 0, year = 0;
		cin >> day >> month >> year;
		if (day < 32 && month < 13 && year < 2049)
		{
			datE.day = day;
			datE.month = month;
			datE.year = year;
		}
		else
		{
			cout << "Ошибка ввода даты!" << endl;
			return;
		}
		cin.ignore();
		cout << "Введите тип кузова автомобиля." << endl;
		getline(cin,carcase);
		cout << "Введите дату последнего техосмотра." << endl;
		getline(cin, inspection);
		cout << "Введите владельца." << endl;
		getline(cin, owner);
		
		
	
	}
	void output()
	{
		cout << "Марка авто: " << brande << endl;
		cout << "Цвет авто: " << color << endl;
		cout << "Заводской номер авто: " << release << endl;
		cout << "Дата выпуска авто: " << datE.day << " " << datE.month << " " << datE.year << endl;
		cout << "Тип кузова: " << carcase << endl;
		cout << "Дата последнего тех.осмотра " << inspection << endl;
		cout << "Владелец авто: " << owner << endl;
	}
	void del_note()
	{
		brande = "";
		color = "";
		release = "";
		datE = { 0,0,0 };
		carcase = "";
		inspection = "";
		owner = "";
	}

	bool search(string release)
	{
		bool flag = false;

		if (this->release == release)
		{
			flag = true;
		}

		return flag;
	}
	
};


int main()
{
	setlocale(LC_ALL, "rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	AUTO mobile[SIZE];
	int choice;
	do
	{
		cout << "Выберите вариант: " << endl;
		cout << "1 - Добавить заметку" << endl;
		cout << "2 - Вывести заметку" << endl;
		cout << "3 - Удалить заметку" << endl;
		cout << "4 - Поиск заметки по заводскому номеру " << endl;
		cout << "5 - Выход" << endl;

		cin >> choice;

		switch (choice)
		{
		case 1:
		{
			cout << "Введите номер пустой записки" << endl;
			int number;
			cin >> number;
			if (number <= SIZE)
			{
				mobile[number - 1].input();
			}
			else
			{
				cout << "Ошибка!" << endl;
			}
			break;
		}
		case 2:
		{
			cout << "Введите номер записки" << endl;
			int number;
			cin >> number;
			if (number <= SIZE)
			{
				mobile[number - 1].output();
			}
			else
			{
				cout << "Ошибка!" << endl;
			}
			break;
		}
		case 3:
		{
			cout << "Введите номер записки" << endl;
			int number;
			cin >> number;
			if (number <= SIZE)
			{
				mobile[number - 1].del_note();
			}
			else
			{
				cout << "Ошибка!" << endl;
			}
			break;
		}
		case 4:
		{
			cout << "Введите заводской номер: ";
			string release;
			cin.ignore();
			getline(cin,release);

			for (int i = 0; i < SIZE; i++)
			{
				if (mobile[i].search(release))
				{
					mobile[i].output();
				}
			}
			break;
		}
		}
	} while (choice != 5);
}
