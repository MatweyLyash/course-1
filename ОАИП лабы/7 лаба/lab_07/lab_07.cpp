#include "Header.h"

int main()
{
	node* p = nullptr;
	int choice;
	int value;
	int amount;
	setlocale(LC_CTYPE, "rus");
	

	while (true)
	{
		cout << "\n1 - добавить элементы в стек" << endl;
		cout << "2 - вывести элементы стека" << endl;
		cout << "3 - подсчитать количество элементов стека, у которых равные соседи" << endl;
		cout << "4 - извелекаем элемент из стека" << endl;
		cout << "5 - очистить стек" << endl;
		cout << "6 - сохранить в файл" << endl;
		cout << "7 - считать из файла" << endl;
		cout << "8 - доп(10)" << endl;
		cout << "9 - выход" << endl;
		cin >> choice;
		switch (choice)
		{
		case 1:
		{
			cout << "Введите количество элементов: ";
			cin >> amount;
			for (int i = 0; i < amount; i++)
			{
				cin >> value;
				push(p, value);
			}

			break;
		}
		case 2:
		{
			print(p);
			break;
		}
		case 3:
		{
			counting(p,amount);
			break;
		}
		case 4:
		{
			pop(p);
			break;
		}
		case 5:
		{
			clear(p);
			break;
		}
		case 6:
		{
			input(p);
			break;
		}
		case 7:
		{
			output(p);
			break;
		}
		case 8:
		{
			dop(p);
		}
		case 9:
		{
			return 0;
		}

		}
	}
}