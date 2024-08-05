#include "Header.h"
#include <iostream>
using namespace std;

int main()
{
	int num = 0;
	int amount = 0;
	queue<int> q;
	setlocale(LC_CTYPE, "rus");
	int choice=1;
	while (choice < 5)
	{
		cout <<"\n1 - ввод очереди" << endl;
		cout << "2 - вывод всей очереди и максимального элемента " << endl;
		cout << "3 - вывод очереди до первого нуля включительно" << endl;
		cout << "4 - удалить элемент очереди" << endl;
		cout << "5 - определить размер очереди" << endl;
		cout << "6 - exit" << endl;
		cin >> choice;
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
			q.print();
			q.getMax();
			break;
		}
		case 3:
		{
			q.print_null();
			q.sizeToNull();
			break;
		}
		case 4:
		{
			q.pop();
			break;
		}
		case 5:
		{
			q.getSize();
		}
		default:
		{
			return 0;
		}
		}
	}
	

}