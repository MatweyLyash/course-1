#include "Head.h"
#include <iostream>

using namespace std;



int main()
{
	queue<float> q;
	setlocale(LC_CTYPE, "Russian");
	int amount = 0, choice = 1, num=0;
	while (choice < 5)
	{
		cout << "1 - добавить элемент" << endl;
		cout << "2 - получить элемент с начала" << endl;
		cout << "3 - вывести элементы" << endl;
		cout << "4 - Сдвиг до максимального" << endl;
		cout << "5 - выход" << endl;
		cout << "Выберите действие:\n";  cin >> choice;
		switch (choice)
		{
		case 1:
		{

			cout << "Введите кол-во элементов в очереди" << endl;
			cin >> amount;
			cout << "Введите элемент очереди" << endl;
			for (int i = 0; i < amount; i++)
			{
				cin >> num;
				q.insert(num);
			}
			break;
		}
		
		case 2:
		{
			q.getFromHead(); break;
		}
		
		case 3:
		{
			q.print();  break;
		}
			
		case 4:
		{
			q.sortMax();  break;
		}
			
	
		}
	}
	return 0;
}
