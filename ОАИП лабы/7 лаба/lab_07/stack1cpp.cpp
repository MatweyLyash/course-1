#include "Header.h"
void push(node *&p, int value)
{
	node* space = new node;
	space->number = value;
	space->next = p;
	p = space;
}
void counting(node*& p,int amount)
{
	int counter = 0;
	node* currrent = p;
	if (currrent == NULL)
	{
		cout << "Стек пустой((9(\n";
	}
	else
	{
		int* neighbour = new int[amount];
		for (int i = 0; i < amount; i++)
		{
			neighbour[i] = p->number;
			p= p->next;
		}
		for (int i = 0; i < amount; i++)
		{
			if (neighbour[i-1] == neighbour[i +1])
			{
				counter++;
			}
		}
		cout << "Кол-во элементов, у которых соседи равные: " << counter << endl;

	}
}
void print(node*& p)
{
	node* current = p;
	if (current == NULL)
	{
		cout << "Стек пустой((9(\n";
	}
	else
	{
		cout << "Элементы стека: ";
		while (current!=NULL)
		{
			cout  << current->number<<" ";
			current = current->next;
		}
		

	}
}
int  pop(node*& p)
{
	node* temp = p;
	int retult = p->number;
	p = p->next;
	delete temp;
	return retult;
}
void clear(node*& p)
{
	if (p == NULL)
	{
		cout << "Стек пустой((9(\n";
	}
	else
	{ 
		node* sled = p->next;
		node* current = p;
		while (sled!=NULL)
		{
			delete current;
			current = sled;
			sled = sled->next;
		}
	}
	p = nullptr;
}
void input(node*& p)
{
	
	node* current = p;
	if (current == NULL)
	{
		cout << "Стек пустой((9(\n";
	}
	else
	{
		ofstream element("element.txt");
		while (current!=NULL)
		{
			
			element << current->number<<" ";
			current = current->next;
		}
		element.close();
	}
}
void output(node*& p)
{
	ifstream element("element.txt");
	
	string line;
	node* current = p;
	if (!element.is_open())
	{
		cout << "Не удалось открыть файл\n";
	}
	else
	{
			getline(element, line);	
	}
	cout << line << endl;
	element.close();
}
void dop(node*& p)
{
	int a, b;
	node* current = p;
	if (current == NULL)
	{
		cout << "Стек пустой((9(\n";
	}
	else
	{
		bool flag = false;
		cout << "Введите минимальное и максимальное число в диапазоне" << endl;
		cin >> a;
		cout << endl;
		cin >> b;
		while (current!=NULL)
		{
			if (a < current->number && current->number < b)
			{
				flag = true;
				break;
			}
			current = current->next;
		}
		if (flag)
		{
			cout << "В данном диапазоне есть хотя бы одно число." << endl;
		}
		else {
			cout << "В данном диапазоне нет числа из списка " << endl;
		}
	}
	

	

}