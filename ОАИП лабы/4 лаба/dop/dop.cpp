#include <iostream>
#include <string>
#include <Windows.h>

#define SIZE 50

using namespace std;
//
//struct student
//{
//	string FIO;
//	string numberOfExams;
//	string marks;
//
//	void input()		//Ввод структуры
//	{
//		cin.ignore();
//		cout << "Введите ФИО студента: ";
//		getline(cin, FIO);
//		cout << "Введите кол-во экзаменов: ";
//		getline(cin, numberOfExams);
//		cout << "Введите оценки (через пробел): ";
//		getline(cin, marks);
//	}
//
//
//	void output()		//Вывод структуры
//	{
//		cout << "ФИО: " << FIO << endl;
//		cout << "Кол-во экзаменов: " << numberOfExams << endl;
//		cout << "Оценка: " << marks << endl;
//	}
//
//	bool search(string name)		//Поиск структуры по ФИО
//	{
//		bool flag = false;
//
//		if (this->FIO == name)
//		{
//			flag = true;
//		}
//
//		return flag;
//	}
//
//	void del_struct(string name)		//Удаление структуры
//	{
//		if (this->FIO == name)
//		{
//			FIO = "";
//			numberOfExams = "";
//			marks = "";
//			cout << "Успешно удалено" << endl;
//		}
//	}
//
//	bool checkMarks()			//Проверка оценок студента
//	{
//		bool flag = false;
//		int numberOfMarks = 0, positiveMarks = 0;
//
//		for (int i = 0; i < marks.length(); i++)
//		{
//			if (marks[i] != ' ' && marks[i] != '\n' && marks[i] != '\0')
//			{
//				numberOfMarks++;
//				if (marks[i] == '4' || marks[i] == '5')
//				{
//					positiveMarks++;
//				}
//			}
//		}
//		if (positiveMarks == numberOfMarks)
//		{
//			flag = true;
//		}
//
//		return flag;
//	}
//
//	bool checkStudent()		//Проверка на существования студента
//	{
//		bool flag = false;
//
//		if (this->FIO != "")
//		{
//			flag = true;
//		}
//
//		return flag;
//	}
//};
//
//float result(student student[SIZE])
//{
//	float result = 0, numAllStudents = 0, numGoodStudents = 0;
//
//	for (int i = 0; i < SIZE; i++)
//	{
//		if (student[i].checkStudent())
//		{
//			numAllStudents++;
//			if (student[i].checkMarks())
//			{
//				numGoodStudents++;
//			}
//		}
//	}
//
//	result = (numGoodStudents / numAllStudents) * 100;
//
//	return result;
//}
//
//int main()
//{
//	setlocale(LC_ALL, "rus");
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//
//	int choice = 0;
//	student student[SIZE];
//
//	do
//	{
//		cout << "Выберите вариант: " << endl;
//		cout << "1 - Добавить информацию о студенте" << endl;
//		cout << "2 - Вывод инфомарции о студенте" << endl;
//		cout << "3 - Удалить информацию о студенте" << endl;
//		cout << "4 - Поиск студента по ФИО" << endl;
//		cout << "5 - Проверка оценок студента" << endl;
//		cout << "6 - Отношение числа студентов, сдавших экзамены на 4 и 5, к общему числу студентов, в процентах" << endl;
//		cout << "7 - Выход" << endl;
//
//		cin >> choice;
//
//		switch (choice)
//		{
//		case 1:
//		{
//			cout << "Введите кол-во студентов Вы хотите добавить:" << endl;
//
//			int num = 0;
//			cin >> num;
//
//			for (int i = 0; i < num; i++)
//			{
//				student[i].input();
//			}
//			break;
//		}
//		case 2:
//		{
//			cout << "Введите ФИО студента" << endl;
//			cin.ignore();
//			string FIO;
//			bool flag = false;
//			getline(cin, FIO);
//
//			for (int i = 0; i < SIZE; i++)
//			{
//				if (student[i].search(FIO))
//				{
//					student[i].output();
//					flag = true;
//					break;
//				}
//			}
//			if (!flag)
//			{
//				cout << "Студент не найден!" << endl;
//			}
//			break;
//		}
//		case 3:
//		{
//			cout << "Введите ФИО студента: ";
//			string name;
//			cin.ignore();
//			getline(cin, name);
//			for (int i = 0; i < SIZE; i++)
//			{
//				student[i].del_struct(name);
//			}
//			break;
//		}
//		case 4:
//		{
//			cout << "Введите ФИО студента: ";
//			string name;
//			bool flag;
//			cin.ignore();
//			getline(cin, name);
//			for (int i = 0; i < SIZE; i++)
//			{
//				flag = student[i].search(name);
//				if (flag)
//				{
//					student[i].output();
//					break;
//				}
//			}
//			if (!flag)
//			{
//				cout << "Не найдено" << endl;
//			}
//			break;
//		}
//		case 5:
//		{
//			cout << "Введите ФИО студента: ";
//			string name;
//			bool flag;
//			cin.ignore();
//			getline(cin, name);
//			for (int i = 0; i < SIZE; i++)
//			{
//				flag = student[i].search(name);
//				if (flag)
//				{
//					if (student[i].checkMarks())
//					{
//						cout << "У студента оценки 4 и 5" << endl;
//					}
//					else
//					{
//						cout << "У студента есть другие оценки кроме 4 и 5" << endl;
//					}
//					break;
//				}
//			}
//			if (!flag)
//			{
//				cout << "Студент не найден" << endl;
//			}
//			break;
//		}
//		case 6:
//		{
//			cout << "Отношение числа студентов, сдавших экзамены на 4 и 5, к общему числу студентов = " << result(student) << " %" << endl;
//		}
//		case 7:
//		{
//			break;
//		}
//		}
//
//	} while (choice != 7);
//}
//







//второй доп

//#define SIZE 5
//
//struct TRAIN
//{
//	string station;
//	string trainNumber;
//	string time;
//
//	void input()
//	{
//		cin.ignore();
//		cout << "Введите станцию: ";
//		getline(cin, station);
//		cout << "Введите номер поезда: ";
//		getline(cin, trainNumber);
//		cout << "Введите время отправления (hh:mm): ";
//		getline(cin, time);
//	}
//
//	void output()
//	{
//		cout << "Станция: " << station << endl;
//		cout << "Номер поезда: " << trainNumber << endl;
//		cout << "Время отправления: " << time << endl;
//	}
//
//	bool trainSearch(string time)
//	{
//		bool flag = false;
//
//		if (this->time >= time)
//		{
//			output();
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
//	int choice = 0;
//	TRAIN trains[SIZE];
//
//	do
//	{
//		cout << "Выберите вариант:" << endl;
//		cout << "1 - Ввести данные в массив" << endl;
//		cout << "2 - Поиск и вывод по времени" << endl;
//		cout << "3 - Выход " << endl;
//		cin >> choice;
//
//		switch (choice)
//		{
//		case 1:
//		{
//			for (int i = 0; i < SIZE; i++)
//			{
//				cout << "Введите данные " << i + 1 << "-ого поезда" << endl;
//				trains[i].input();
//			}
//			break;
//		}
//		case 2:
//		{
//			cout << "Введите время (hh:mm)" << endl;
//			string time;
//			cin.ignore();
//			getline(cin, time);
//
//			bool check[SIZE] = {};
//
//			for (int i = 0; i < SIZE; i++)
//			{
//				check[i] = trains[i].trainSearch(time);
//			}
//
//			int counterFalse = 0;
//
//			for (int i = 0; i < SIZE; i++)
//			{
//				if (!check[i])
//				{
//					counterFalse++;
//				}
//				if (counterFalse == SIZE)
//				{
//					cout << "Поездов не найдено!" << endl;
//				}
//			}
//			break;
//		}
//		case 3:
//		{
//			break;
//		}
//		}
//	} while (choice != 3);
//}
//





//доп три

#define SIZE 5



struct SANATORIUM
{
	string name;
	string location;
	string profile;
	string numOfVouchers;

	bool search(string searchName)
	{
		bool flag = false;

		if (this->name == searchName)
		{
			flag = true;
		}

		return flag;
	}

	void output()
	{
		cout << "Название санатория " << name << endl;
		cout << "Расположение санатория " << location << endl;
		cout << "Профиль санатория " << profile << endl;
		cout << "Количество путёвок " << numOfVouchers << endl;
	}

	void output_sort()
	{
		cout << profile << "\t\t\t|\t" << name << "\t|\t" << location << "\t|\t" << numOfVouchers << endl;
	}
};

int main()
{
	setlocale(LC_ALL, "rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	SANATORIUM element[SIZE];

	
	element[0].name = "Голубцы  "; element[0].location = "Минск    "; element[0].profile = "Желудок"; element[0].numOfVouchers = "45";
	element[1].name = "ВладВайбе"; element[1].location = "Брест    "; element[1].profile = "Зрение"; element[1].numOfVouchers = "31";
	element[2].name = "У Васи   "; element[2].location = "Васьковка"; element[2].profile = "Зрение"; element[2].numOfVouchers = "12";
	element[3].name = "Ружанский"; element[3].location = "Пружаны  "; element[3].profile = "Сердце"; element[3].numOfVouchers = "43";
	element[4].name = "Нарочанка"; element[4].location = "Витебск  "; element[4].profile = "Желудок"; element[4].numOfVouchers = "69";

	cout << "Табличное представление данных" << endl;
	cout << "Лечебный профиль" << "\t|\t" << "Название" << "\t|\t" << "Расположение" << "\t|\t" << "Кол-во путёвок" << endl;
	for (int i = 0; i < SIZE; i++)
	{
		element[i].output_sort();
	}
	int choice = 0;
	string sanName;
	bool flag = false;
	do
	{
		cout << "Введите вариант:" << endl;
		cout << "1 - Поиск и вывод информации" << endl;
		cout << "2 - Выход" << endl;
		cin >> choice;

		if (choice == 1)
		{
			cout << "Введите название санатория" << endl;
			cin.ignore();
			getline(cin, sanName);

			for (int i = 0; i < SIZE; i++)
			{
				if (element[i].search(sanName))
				{
					element[i].output();
					flag = true;
					break;
				}
			}
			if (!flag)
			{
				cout << "Санаторий не найден!" << endl;
			}
		}

	} while (choice != 2);
}
