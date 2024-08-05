#include <iostream>
#include <fstream>
using namespace std;
struct list
{
	int number;
	list* next;
};

void insert(list*& HEAD, int value)
{
	list* ptr = new list;//запись происходит как в стеке
	if (ptr != NULL)
	{
		ptr->number = value;
		ptr->next = HEAD;
		HEAD = ptr;
	}
}
void print(list*& HEAD)
{
	list* current = HEAD;
	if (current == NULL)
	{
		cout << "Список пустой(" << endl;
	}
	else {
		while (current != NULL)
		{
			cout << current->number << "-->";
			current = current->next;
		}
		cout << "NULL" << endl;
	}
}
int del(list*& HEAD, int value)
{
	list * temp;


	if (value == HEAD->number)
	{
		temp = HEAD;
		HEAD = HEAD->next;
		delete temp;
		return value;
	}
	else
	{
		list* current=HEAD->next, * prev=HEAD;
		while (current != NULL)
		{
			temp = current;//передаём в указатель адрес элемента, который хотим удалить
			prev->next = current->next;//удлинняем связку, чтобы обойти адрес current
			delete temp;
			return value;
		}
	}
	



}

void search(list*& Head, int value)
{
	list* current =Head;
	if (current == NULL)
	{
		cout << "Список пуст!" << endl;
	}
	else
	{
		while (current != NULL)
		{
			if (current->number == value)
			{
				cout << "Такой элемент есть в списке: " << current->number << endl;//указателі менять так
				break;
			}
			current = current->next;
		}
	}
}

void input(list *&HEAD)
{
	
	list buf;
	ofstream element("element.bin");
	if (element.fail())
	{
		cout << "Ошибка открытия файла" << endl;
		exit(1);
	}
	else
	{
		while (HEAD)
		{
			buf = *HEAD;
			element.write((char*)&buf, sizeof(list));
			HEAD = HEAD->next;
		}
	}
	element.close();
	cout << "Элементы записаны в файл." << endl;
}

void output(list*& HEAD)
{
	

	list buf, *first;
	ifstream elementRead("element.bin");
	if (elementRead.fail())
	{
		cout << "Ошибка открытия файла" << endl;
		exit(1);
	}
	elementRead.read((char*)&buf, sizeof(list));
	

		while (!elementRead.eof())
		{
			insert(first, buf.number);
			cout  << buf.number << "-->";
			elementRead.read((char*)&buf, sizeof(list));
		
		}
		cout << "-->NULL" << endl;
	
	elementRead.close();
	
	
}
void ubung(list*& HEAD)
{
	
	int sum = 0;
	if (HEAD == NULL)
	{
		cout << "Список пуст" << endl;
	}
	while (HEAD != NULL)
	{
		if (HEAD->number >= -99 && HEAD->number <= -1)
		{
			sum += HEAD->number;
		}
		HEAD = HEAD->next;
	}
	if (sum == 0)
	{
		cout << "В списке отсутствуют отрицательные элементы" << endl;
	}
	else
	{
		cout << "Сумма отрицательных двухзначных элементов списка: " << sum << endl;
	}

}
void ubung10(list*& HEAD)
{
	int product = 1;
	if (HEAD == NULL)
	{
		cout << "Список пуст" << endl;
	}
	while (HEAD != NULL)
	{
		if (HEAD->number <= 9)
		{
			product *= HEAD->number;
		}
		HEAD = HEAD->next;
	}
	cout << "Произведение элементов меньших 10 в списке: " << product << endl;
	
}
void ubung14(list*& HEAD)
{

	int sum = 0;
	if (HEAD == NULL)
	{
		cout << "Список пуст" << endl;
	}
	while (HEAD != NULL)
	{
		if (HEAD->number %5==0 && HEAD->number<0)
		{
			sum += HEAD->number;
		}
		HEAD = HEAD->next;
	}
	if (sum == 0)
	{
		cout << "Необходимые элементы отсутствуют в списке(" << endl;
	}
	else
	{
		cout << "Сумма отрицательных двухзначных элементов списка: " << sum << endl;
	}

}
void ubung1(list*& HEAD)
{
	int sum = 0;
	if (HEAD == NULL)
	{
		cout << "Список пуст" << endl;
	}
	while (HEAD != NULL)
	{
		if (HEAD->number >0)
		{
			sum += HEAD->number;
		}
		HEAD = HEAD->next;
	}
	if (sum == 0)
	{
		cout << "В списке отсутствуют положительные элементы" << endl;
	}
	else
	{
		cout << "Сумма отрицательных двухзначных элементов списка: " << sum << endl;
	}
}



int main()
{
	setlocale(LC_CTYPE, "rus");
	list* HEAD = nullptr;
	int n, cycle, el, searchEl, delEl;
	while (true)
	{
		cout << "1 - Добавление элемента в список." << endl;
		cout << "2 - Вывод списка в консоль" << endl;
		cout << "3 - Поиск элемента из списка" << endl;
		cout << "4 - Удаление элемента из списка" << endl;
		cout << "5 - Запись списка в файл" << endl;
		cout << "6 - Считывание списка из файла" << endl;
		cout << "7 - Задание моего варинта " << endl;
		cout << "8 - Задание не моего варинта(10) " << endl;
		cout << "9 - Задание не моего тоже варинта(14) " << endl;
		cout << "10 - Задание не моего тоже (как и прошлый раз) варинта(1) " << endl;
		cout << "11 - exit" << endl;
		cin >> n;
		switch (n)
		{
			case 1:
			{
				cout << "Введите кол-во элеменов, которые хотите добавить в список" << endl;
				cin >> cycle;
				cout << "Введите ваши элементы через пробел" << endl;
				for (int i = 0; i < cycle; i++)
				{
					cin >> el;
					insert(HEAD, el);
				}
				break;
			}
			case 2:
			{
				cout << "Ваши элементы в списке: ";
				print(HEAD);
				break;
			}
			case 3:
			{
				cout << "Введите элемент, который хотите найти: ";
				cin >> searchEl;
				search(HEAD, searchEl);
				break;
			}
			case 4:
			{
				cout << "Введите элемент, который хотите удалить: ";
				cin >> delEl;
				del(HEAD, delEl);
				break;
			}
			case 5:
			{
				input(HEAD);
				break;
			}
			case 6:
			{
				output(HEAD);
				break;
			}
			case 7:
			{
				ubung(HEAD);
				break;
			}
			case 8:
			{
				ubung10(HEAD);
				break;
			}
			case 9:
			{
				ubung14(HEAD);
				break;
			}
			case 10:
			{
				ubung1(HEAD);
			}
			case 11:
			{
				return 0;
			}


		}
		

	}
}

