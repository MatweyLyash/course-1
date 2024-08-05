//Преобразовать строку: после каждой буквы c добавить символ *.Использовать динамический массив.
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str;
	cout << "Enter string: ";
	getline(cin, str);
	int size = str.size();
	char* arr = new char[size];
	for (int i = 0; i < size; i++)
	{
		arr[i] = str[i];
	}
	for (int i = 0; i < size; i++)
	{
		if (arr[i] == 'c')
		{
			for (int j = size; j > i; j--)
			{
				arr[j] = arr[j - 1];
			}
			arr[i + 1] = '*';
			size++;
		}
	}
	for (int i = 0; i < size; i++)
	{
		cout << arr[i];
	}
	delete[] arr;
	return 0;
}



