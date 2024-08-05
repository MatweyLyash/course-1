﻿#include <iostream>
#include <fstream>
#include <string>

using namespace std;

//int main()
//{
//	setlocale(LC_ALL, "rus");
//
//	ifstream fin("dataFileEx1.txt");
//	ofstream fout("resultFileEx1.txt");
//
//	if (fin.fail() || fout.fail())
//	{
//		cout << "Ошибка открытия файлов!" << endl;
//		exit(1);
//	}
//	else
//	{
//		cout << "Файлы открыты!" << endl;
//	}
//
//	string str;
//	int i = 1;
//
//	while (getline(fin, str))
//	{
//		if (i % 2 == 0)
//		{
//			fout << str << '\n';
//		}
//		i++;
//	}
//
//	cout << "Результат записан в файл!" << endl;
//
//	fin.close();
//	fout.close();
//
//	ifstream finSize("dataFileEx1.txt");
//	ifstream foutSize("resultFileEx1.txt");
//
//	finSize.seekg(0, ios::end);
//	long sizeFin = finSize.tellg();
//	finSize.seekg(0, ios::beg);
//
//	foutSize.seekg(0, ios::end);
//	long sizeFout = foutSize.tellg();
//	foutSize.seekg(0, ios::beg);
//
//	cout << "Размер первого файла " << sizeFin << " байт" << endl;
//	cout << "Размер второго файла " << sizeFout << " байт" << endl;
//
//	finSize.close();
//	foutSize.close();
//}




int main()
{
	setlocale(LC_ALL, "rus");

	ofstream fout("fileEx1.txt");

	if (fout.fail())
	{
		cout << "Невозможно открыть файл" << endl;
		exit(1);
	}
	else
	{
		cout << "Файл открыт!" << endl;
	}

	cout << "Введите строку" << endl;
	string str;
	getline(cin, str);
	fout << str;
	fout.close();

	ifstream fin("fileEx1.txt");

	if (fin.fail())
	{
		cout << "Невозможно открыть файл" << endl;
		exit(1);
	}
	else
	{
		cout << "Файл открыт!" << endl;
	}

	int number = 0;

	while (fin >> str)
	{
		if (str >= "1" && str <= "9")
		{
			number = stoi(str);

			if (number % 2 != 0)
			{
				cout << number << endl;
			}
		}
	}

	fin.close();
}