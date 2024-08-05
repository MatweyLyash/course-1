#include <iostream>
#include <string>

using namespace std;

//Функция сравнения строк
inline void string_comparison(string first_str, string second_str)
{
	if (first_str.length() == second_str.length())
	{
		cout << "Строки равны" << endl;
	}
	else if (first_str.length() > second_str.length())
	{
		cout << "Первая строка больше второй" << endl;
	}
	else
	{
		cout << "Вторая строка больше первой" << endl;
	}
}

//Функция поиска подстроки в строке
inline int substring_search(string str, string substr)
{
	int check;

	check = str.find(substr, 0);

	return check;
}

inline int string_calculator()
{
	setlocale(LC_ALL, "rus");

	//1. Cравнения строк

	cout << "Сравнение строк" << endl;

	string first_str, second_str;

	cout << "Введите первую строку " << endl;
	getline(cin, first_str);
	cout << "Введите вторую строку" << endl;
	getline(cin, second_str);

	if (first_str.length() == second_str.length())
	{
		cout << "Строки равны" << endl;
	}
	else if (first_str.length() > second_str.length())
	{
		cout << "Первая строка больше второй" << endl;
	}
	else
	{
		cout << "Вторая строка больше первой" << endl;
	}

	//string_comparison(first_str, second_str);

	//2. Поиск подстроки в строке

	cout << "Поиск подстроки в строке" << endl;

	string str, substr;

	cout << "Введите строку " << endl;
	getline(cin, str);
	cout << "Введите подстроку" << endl;
	getline(cin, substr);

	if (substring_search(str, substr) != -1)
	{
		cout << "Подстрока найдена!" << endl;
	}
	else
	{
		cout << "Подстрока не найдена :(" << endl;
	}

	//3. Замена подстроки в строке

	cout << "Замена подстроки в строке" << endl;

	string replace;

	cout << "Введите строку " << endl;
	getline(cin, str);
	cout << "Введите подстроку" << endl;
	getline(cin, substr);

	if (substring_search(str, substr) != -1)
	{
		cout << "Подстрока найдена!" << endl << "Введите замену подстроки" << endl;
		getline(cin, replace);
		if (replace.length() <= substr.length())
		{
			str.replace(substring_search(str, substr), substr.length(), replace);
			cout << str << endl;
		}
		else
		{
			cout << "Длина замены больше длины подстроки!" << endl;
		}
	}
	else
	{
		cout << "Подстрока не найдена :(" << endl;
	}

	//4. Счётчик гласных в строке

	cout << "Счётчик гласных в строке" << endl;
	cout << "Введите строку " << endl;
	getline(cin, str);

	string vowels = "AaEeIiOoUuYy";
	int counter = 0;

	for (int i = 0; i < str.length(); i++)
	{
		for (int j = 0; j < vowels.length(); j++)
		{
			if (str[i]==vowels[j])
			{
				counter++;
			}
		}
	}

	cout << "Количество гласных в строке " << counter;

	return 0;
	/*Всё вельми крута!*/
}