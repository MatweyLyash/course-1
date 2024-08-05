#include  "stdafx.h"

using namespace std;

int einfachDays[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 }; // количество дней в месяце,если год не високосный
int unEinfachDays[12] = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 }; // количество дней в месяце,если год високосный
//bool fails(int days, int month) {
//	if (days > 31)
//	{
//		cout << "Неверно введена дата\n";
//		return 0;
//	}
//	if (month > 12)
//	{
//		cout << "Неверно введена дата\n";
//		return 0;
//	}
//	
//}
//int visokos(int years) {
//	int counter = 0;
//	if (years % 4 == 0 && years % 100 != 0 || years % 400 == 0)
//	{
//		cout << "Високосный год\n";
//		counter++;
//		return counter;
//	}
//	else
//	{
//		cout << "Не високосный год\n";
//		return counter;
//	}
//}
//int SNOD(int counter, int days, int month,int serialNumberOfDay, int einfachDays[12], int unEinfachDays[12])
//{
//	if (counter == 1)
//	{
//		for (int i = 0; i < (month - 1); i++)
//		{
//			serialNumberOfDay += unEinfachDays[i];
//		}
//		serialNumberOfDay += days;
//		cout << "Порядковый номер дня в високосном году : " << serialNumberOfDay << "\n";
//	}
//	else
//	{
//		for (int i = 0; i < (month - 1); i++)
//		{
//			serialNumberOfDay += einfachDays[i];
//		}
//		serialNumberOfDay += days;
//		cout << "Порядковый номер дня в не високосном году : " << serialNumberOfDay << "\n";
//	}
//	return serialNumberOfDay;
//	
//}
int main() {
	
	int serialNumberOfDay=0;

	setlocale(LC_ALL, "Russian");
	cout << "Введите дату в формате ДДММГГГГ\n";
	string date;
	string born;
	cin >> date;
	
	int days = stoi(date.substr(0, 2));

	int month = stoi(date.substr(2, 2));
	if (!fails(days, month))
	{
		cout << "Некорректная дата";
		return 0;
	}
	int years = stoi(date.substr(4, 4));
	bool check = visokos(years);
	if (check)
	{
		cout << "Данный год високосный" << endl;
	}
	else
	{
		cout << "Данный год не високосный" << endl;
	}
	if (check && days > 29 && month == 2 || !check && days > 28 && month == 2)
	{
		cout << "Некорректная дата для февраля ";
		return 0;
	}

	cout << "Порядковый номер дня в  году : " << SNOD(days, month, years) << "\n";

	
	cout << "Введите дату вашего дня рождения в формате ДДММ\n";
	cin >> born;
	int birth;
	int daysOfBorn = stoi(born.substr(0, 2));
	int monthOfBorn = stoi(born.substr(2, 2));
	int yearsOfBorn = 2024;

	if (!fails(days, month))
	{
		cout << "Неверно введена дата\n";
		return 0;
	}
	if (SNOD(days, month, years) <= SNOD(daysOfBorn, monthOfBorn, yearsOfBorn))
	{
		
		birth= SNOD(daysOfBorn, monthOfBorn, yearsOfBorn) - SNOD(days, month, years);
		cout << "До дня рождения  осталось дней: " << birth << endl;
	}
	else
	{
		
		birth = 365 - SNOD(days, month, years) + SNOD(daysOfBorn, monthOfBorn, yearsOfBorn) + visokos(years);
		cout << "До ближайшего дня рождения  осталось дней: " << birth << endl;
	}
	

}