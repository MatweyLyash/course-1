#include <iostream>
#include <fstream>
#include <cstdio>
#include <string>
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "rus");

	string str;
	string temp;
	int N, K;
	int counter = 0;

	ifstream FILE1("FILE1.txt");
	ofstream FILE2("FILE2.txt");
	if (!FILE1)
	{
		cout << "Файл не открыт(";
		return 0;
	}
	else
	{
		cout << "Файл открыт!)" << endl;
	}

	cout << " Начиная с какой и до какой строки вы хотите копировать строки с файла FILE1? " << endl;
	cin >> N;
	cin >> K;
	if (N > K && N < 1)
	{
		cout << "Неверные данные";
		return 0;
	}
	for (int i = 1; getline(FILE1, str), i <= K; i++)
	{
		if (i < N)
		{
			str = ' ';
		}
		else
		{
			FILE2 << str << "\n";
		}

	}
	FILE1.close();
	FILE2.close();
	ifstream readFile("FILE2.txt");
	if (!FILE2)
	{
		cout << "Файл2 не открыт(";
		return 0;
	} 
	

	string sogl = "QqWwRrTtPpSsDdFfGgHhJjKkLlZzXxCcVvBbNnMm";
	while (!readFile.eof())
	{
		getline(readFile, temp);
		for (int i = 0; i < temp.length(); i++)
		{
			if (sogl.find(temp[i]) != -1)//find возвращает -1 (положение символа в строке согл), если символ темпа нельзя найти в согл
			{
				counter++;
			}
		}
	}
	readFile.close();

	cout << "Число согласных букв:"<<counter;
}
//int main()
//{
//	setlocale(LC_CTYPE, "rus");
//	string read;
//	
//	string group;
//	
//	ofstream File1("lab_01_02.txt");
//
//	if (!File1)
//	{
//		cout << "Файл не открыт(";
//		return 0;
//	}
//	else
//	{
//		cout << "Файл открыт для записи!)" << endl;
//	}
//	cout << "Введите строкy, состоящую из групп цифр." << endl;
//	
//	getline(cin,group);
//	File1 << group;
//	File1.close();
//
//	ifstream File2("lab_01_02.txt");
//
//	if (!File2)
//	{
//		cout << "Файл не открыт(";
//		return 0;
//	}
//	else
//	{
//		cout << "Файл открыт для чтения!) " << endl;
//	}
//	while (File2 >> read)
//	{
//		if (read.length() % 2 == 0)
//		{
//			cout << read << " ";
//		}
//	}
//
//	
//}
