#include <iostream>
#include <string>
#include <Windows.h>

#define SIZE 5

using namespace std;

enum SEX
{
	man = 1, woman, attackHelicopter_P600
};

struct CITIZENS
{
	string FIO;
	struct BIRTH_DATE
	{
		unsigned int day : 5;
		unsigned int month : 4;
		unsigned int year : 11;
	} date = { 0,0,0 };
	string adress;
	string sex;

	void input()
	{
		cin.ignore();
		cout << "Введите ФИО" << endl;
		getline(cin, FIO);
		cout << "Введите дату рождения в формате ДД ММ ГГГГ " << endl;
		unsigned int day = 0, month = 0, year = 0;
		cin >> day >> month >> year;
		if (day < 32 && month < 13 && year < 2049)
		{
			date.day = day;
			date.month = month;
			date.year = year;
		}
		cin.ignore();
		cout << "Введите адрес" << endl;
		getline(cin, adress);
		cout << "Введите пол (1 - мужской, 2 - женский, 3 - опасная мащина)" << endl;
		int choice = 0;
		cin >> choice;
		switch (choice)
		{
		case SEX::man:
		{
			sex = "Мужской";
			break;
		}
		case SEX::woman:
		{
			sex = "Женский";
			break;
		}
		case SEX::attackHelicopter_P600:
		{
			sex = "attackHelicopter_P600";
			break;
		}
		default:
		{
			cout << "Неверный вариант" << endl;
			break;
		}
		}
	}

	void output()
	{
		cout << "ФИО: " << FIO << endl;
		cout << "Дата рождения:" << date.day << " " << date.month << " " << date.year << endl;
		cout << "Адрес: " << adress << endl;
		cout << "Пол: " << sex << endl;
	}

	void del_citizen()
	{
		FIO = "";
		date = { 0,0,0 };
		adress = "";
		sex = "";
	}

	bool search(unsigned int year)
	{
		bool flag = false;

		if (this->date.year == year)
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

	CITIZENS citizen[SIZE];
	int choice;
	do
	{
		cout << "Выберите вариант: " << endl;
		cout << "1 - Добавить горожанина" << endl;
		cout << "2 - Вывести информацию о горожанине" << endl;
		cout << "3 - Удалить информацию о горожанине" << endl;
		cout << "4 - Поиск горожанина по году рождения" << endl;
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
				citizen[number - 1].input();
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
				citizen[number - 1].output();
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
				citizen[number - 1].del_citizen();
			}
			else
			{
				cout << "Ошибка!" << endl;
			}
			break;
		}
		case 4:
		{
			cout << "Введите год рождения: ";
			int birthYear;
			bool flag = false;
			cin.ignore();
			cin >> birthYear;

			for (int i = 0; i < SIZE; i++)
			{
				if (citizen[i].search(birthYear))
				{
					citizen[i].output();
					flag = true;
				}
			}
			if (!flag)
			{
				cout << "Горожанин не найден!" << endl;
			}
			break;
		}
		}
	} while (choice != 5);
}


//#include <iostream>
//#include <string>
//#include <Windows.h>
//
//#define SIZE 5
//
//using namespace std;
//
//union TIME
//{
//	unsigned int hours;
//	unsigned int minutes;
//};
//
//struct TRAINS
//{
//	string number;
//	string station;
//	string travel_days;
//	struct DEPARTURE_TIME
//	{
//		unsigned int hours : 5;
//		unsigned int minutes : 6;
//	} departure_time = { 0,0 };
//	struct ARRIVAL_TIME
//	{
//		unsigned int hours : 5;
//		unsigned int minutes : 6;
//	} arrival_time = { 0,0 };
//
//
//	void input()
//	{
//		cin.ignore();
//		cout << "Введите номер поезда" << endl;
//		getline(cin, number);
//		cout << "Введите пункт назначения" << endl;
//		getline(cin, station);
//		cout << "Введите дни следования" << endl;
//		getline(cin, travel_days);
//		TIME time{};
//		cout << "Введите время отправления" << endl;
//		cout << "Введите час" << endl;
//		cin >> time.hours;
//		if (time.hours < 25)
//		{
//			departure_time.hours = time.hours;
//		}
//		cout << "Введите минуты" << endl;
//		cin >> time.minutes;
//		if (time.minutes < 61)
//		{
//			departure_time.minutes = time.minutes;
//		}
//		cout << "Введите время прибытия" << endl;
//		cout << "Введите час" << endl;
//		cin >> time.hours;
//		if (time.hours < 25)
//		{
//			arrival_time.hours = time.hours;
//		}
//		cout << "Введите минуты" << endl;
//		cin >> time.minutes;
//		if (time.minutes < 61)
//		{
//			arrival_time.minutes = time.minutes;
//		}
//	}
//
//	void output()
//	{
//		cout << "Номер поезда: " << number << endl;
//		cout << "Пункт назначения: " << station << endl;
//		cout << "Дни следования: " << travel_days << endl;
//		cout << "Время отправления: " << departure_time.hours << ":" << departure_time.minutes << endl;
//		cout << "Время прибытия: " << arrival_time.hours << ":" << arrival_time.minutes << endl;
//	}
//
//	bool search(string station)
//	{
//		bool flag = false;
//
//		if (this->station == station)
//		{
//			flag = true;
//		}
//
//		return flag;
//	}
//};
//
//int main()
//{
//	setlocale(LC_ALL, "rus");
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//
//	TRAINS train[SIZE];
//	int choice;
//	do
//	{
//		cout << "Выберите вариант: " << endl;
//		cout << "1 - Добавить информацию о поезде" << endl;
//		cout << "2 - Вывести информацию" << endl;
//		cout << "3 - Поиск поезда по пункту назначения" << endl;
//		cout << "4 - Выход" << endl;
//
//		cin >> choice;
//
//		switch (choice)
//		{
//		case 1:
//		{
//			cout << "Введите номер пустой записки" << endl;
//			int number;
//			cin >> number;
//			if (number <= SIZE)
//			{
//				train[number - 1].input();
//			}
//			else
//			{
//				cout << "Ошибка!" << endl;
//			}
//			break;
//		}
//		case 2:
//		{
//			cout << "Введите номер записки" << endl;
//			int number;
//			cin >> number;
//			if (number <= SIZE)
//			{
//				train[number - 1].output();
//			}
//			else
//			{
//				cout << "Ошибка!" << endl;
//			}
//			break;
//		}
//		case 3:
//		{
//			cin.ignore();
//			cout << "Введите пункт назначения: ";
//			string station;
//			getline(cin, station);
//			bool flag = false;
//
//			for (int i = 0; i < SIZE; i++)
//			{
//				if (train[i].search(station))
//				{
//					train[i].output();
//					flag = true;
//				}
//			}
//			if (!flag)
//			{
//				cout << "Поезд не найден!" << endl;
//			}
//			break;
//		}
//		}
//	} while (choice != 4);
//}
