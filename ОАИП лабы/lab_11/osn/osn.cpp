﻿#include <iostream>
#include <fstream>
using namespace std;
struct Tree //дерево
{
	int key; //ключ

	Tree* Left, * Right;
};

Tree* makeTree(Tree* Root); //Создание дерева
Tree* list(int i); //Создание нового элемента
Tree* insertElem(Tree* Root, int key); //Добавление нового элемента
Tree* search(Tree* n, int key); //Поиск элемента по ключу
Tree* delet(Tree* Root, int key); //Удаление элемента по ключу
void view(Tree* t, int level); //Вывод дерева
void insertElement(Tree*& t, int key); //ввод в дерево с файла
void delAll(Tree* t); //Очистка дерева

void readFromFile(Tree*& t) {
	ifstream file("file.txt");
	int buff;
	while (file >> buff)
		insertElement(t, buff);
	file.close();
}

void insertElement(Tree*& t, int key) {
	if (t == NULL) {
		t = new Tree;
		t->key = key;
		t->Left = t->Right = NULL;
		return;
	}
	if (key == t->key)
		return; // ключи должны быть уникальны
	if (key < t->key)
		insertElement(t->Left, key);
	else
		insertElement(t->Right, key);
}
void toFile(Tree* t, ofstream& file) // рекурсивная функция записи дерева в файл
{
	if (t)
	{
		toFile(t->Left, file); // записываем левое поддерево
		file << t->key << endl; // записываем текущий узел
		toFile(t->Right, file); // записываем правое поддерево
	}
}

void writeToFile(Tree* t)
{
	ofstream file("file2.txt");
	if (file.is_open())
	{
		toFile(t, file);
		file.close();
		cout << "Дерево записано в файл .txt" << endl;
	}
	else
	{
		cout << "Ошибка открытия файла" << endl;
	}
}

int c = 0; //количество слов
Tree* Root = NULL; //указатель корня
int main()
{
	setlocale(0, "Russian");
	int key, choice;
	Tree* rc; 
	for (;;)
	{
		cout << "1 - создание дерева\n";
		cout << "2 - добавление элемента\n";
		cout << "3 - поиск по ключу\n";
		cout << "4 - удаление элемента\n";
		cout << "5 - вывод дерева\n";
		cout << "6 - чтение чисел из файла и их сортировка\n";
		cout << "7 - очистка дерева\n";
		cout << "8 - выход\n";
		cout << "Ваш выбор?\n";
		cin >> choice;
		cout << "\n";
		switch (choice)
		{
		case 1: Root = makeTree(Root); break;
		case 2: cout << "\nВведите ключ: "; cin >> key;



			insertElem(Root, key); break;
		case 3: cout << "\nВведите ключ: "; cin >> key;
			rc = search(Root, key);
			 break;
		case 4: cout << "\nВведите удаляемый ключ: "; cin >> key;
			Root = delet(Root, key); break;
		case 5: if (Root->key >= 0)
		{
			cout << "Дерево " << endl;
			view(Root, 0);
			cout << endl;
		}
			  else cout << "Дерево пустое\n"; break;
		case 6:
		{
			readFromFile(Root);
			writeToFile(Root);
			break;

		}
		case 7: delAll(Root); break;
		case 8: exit(0);
		}
	}
	return 0;
}
Tree* makeTree(Tree* Root) //Создание дерева
{
	int key;
	cout << "Конец ввода - отрицательное число\n\n";
	if (Root == NULL) // если дерево не создано
	{
		cout << "Введите ключ корня: "; cin >> key;
		
	
		

		Root = list(key); // установка указателя на корень
	}
	while (1) //добавление элементов
	{
		cout << "\nВведите ключ: "; cin >> key;
		if (key < 0) break; //признак выхода (ключ < 0)

		insertElem(Root, key);
	}
	
	return Root;
}
Tree* list(int i) //Создание нового элемента
{
	Tree* t = new Tree[sizeof(Tree)];
	t->key = i;
	t->Left = t->Right = NULL;
	return t;
}
Tree* insertElem(Tree* t, int key) //Добавление нового элемента
{
	Tree* Prev{}; // Prev - элемент перед текущим
	int find = 0; // признак поиска
	while (t && !find)
	{
		Prev = t;
		if (key == t->key)
			find = 1; //ключи должны быть уникальны
		else
			if (key < t->key) t = t->Left;
			else t = t->Right;
	}
	if (!find) //найдено место с адресом Prev
	{
		t = list(key); //создается новый узел
		if (key < Prev->key) // и присоединяется либо
			Prev->Left = t; //переход на левую ветвь,
		else
			Prev->Right = t; // либо на правую
	}
	return t;
}
Tree* delet(Tree* Root, int key) //Удаление элемента по ключу
{ // Del, Prev_Del - удаляемый элемент и его предыдущий ;
// R, Prev_R - элемент, на который заменяется удаленный, и его родитель;
	Tree* Del, * Prev_Del, * R, * Prev_R;
	Del = Root;
	Prev_Del = NULL;
	while (Del != NULL && Del->key != key)//поиск элемента и его родителя
	{
		Prev_Del = Del;
		if (Del->key > key)
			Del = Del->Left;
		else
			Del = Del->Right;
	}
	if (Del == NULL) // элемент не найден
	{
		puts("\nНет такого ключа");
		return Root;
	}
	if (Del->Right == NULL) // поиск элемента R для замены
		R = Del->Left;
	else
		if (Del->Left == NULL)
			R = Del->Right;
		else
		{
			Prev_R = Del; //поиск самого правого элемента в левом поддереве
			R = Del->Left;
			while (R->Right != NULL)
			{
				Prev_R = R;
				R = R->Right;
			}
			if (Prev_R == Del) // найден элемент для замены R и его родителя Prev_R
				R->Right = Del->Right;
			else
			{
				R->Right = Del->Right;
				Prev_R->Right = R->Left;
				R->Left = Prev_R;
			}
		}
	if (Del == Root) Root = R; //удаление корня и замена его на R
	else
		// поддерево R присоединяется к родителю удаляемого узла
		if (Del->key < Prev_Del->key)
			Prev_Del->Left = R; // на левую ветвь
		else
			Prev_Del->Right = R; // на правую ветвь
	int tmp = Del->key;
	cout << "\nУдален элемент с ключом " << tmp << endl;
	delete Del;
	return Root;
}
Tree* search(Tree* n, int key) //Поиск элемента по ключу
{
	Tree* rc = n;
	if (rc != NULL)
	{
		if (key < (key, n->key))
			rc = search(n->Left, key);
		else
			if (key > (key, n->key))
				rc = search(n->Right, key);
	}
	else
		cout << "Нет такого элемента\n";
	return rc;
}
void view(Tree* t, int level) //Вывод дерева
{
	if (t)
	{
		view(t->Right, level + 1); //вывод правого поддерева
		cout << t->key<<" ";
		
		
		view(t->Left, level + 1); //вывод левого поддерева
	}
}





void delAll(Tree* t) //Очистка дерева
{
	if (t != NULL)
	{
		delAll(t->Left);
		delAll(t->Right);
		delete t;
	}
}