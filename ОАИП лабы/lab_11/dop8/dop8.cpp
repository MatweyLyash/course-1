#include <iostream>
using namespace std;
struct Tree //дерево
{
	int key; //ключ
	int numbers[2]; 
	Tree* Left, * Right;
};
Tree* makeTree(Tree* Root, int& maxKey); //Создание дерева
Tree* list(int i, int* s); //Создание нового элемента
Tree* insertElem(Tree* Root, int key, int* s); //Добавление нового элемента
Tree* search(Tree* n, int key); //Поиск элемента по ключу
Tree* delet(Tree* Root, int key); //Удаление элемента по ключу
void view(Tree* t, int level); //Вывод дерева
void maxSumKey(Tree* t, int level, int buff, int& maxKey);
void delAll(Tree* t); //Очистка дерева
int c = 0; //количество слов
Tree* Root = NULL; //указатель корня
int main()
{
	setlocale(0, "Russian");
	int key, choice, maxKey = 0, sum = 0;;
	Tree* rc; int s[2], num;
	for (;;)
	{
		cout << "1 - создание дерева\n";
		cout << "2 - добавление элемента\n";
		cout << "3 - поиск по ключу\n";
		cout << "4 - удаление элемента\n";
		cout << "5 - вывод дерева\n";
		cout << "6 - удаления элемента с максимальной суммой чисел\n";
		cout << "7 - очистка дерева\n";
		cout << "8 - выход\n";
		cout << "Ваш выбор?\n";
		cin >> choice;
		cout << "\n";
		switch (choice)
		{
		case 1: Root = makeTree(Root, maxKey); break;
		case 2: cout << "\nВведите ключ: "; cin >> key;
			cout << "Введите слово: ";
			for (int i = 0; i < 2; i++)
			{
				cin >> num;
				s[i] = num;
			}


			insertElem(Root, key, s); break;
		case 3: cout << "\nВведите ключ: "; cin >> key;
			rc = search(Root, key);
			cout << "Найденные числа= ";
			cout << rc->numbers; break;
		case 4: cout << "\nВведите удаляемый ключ: "; cin >> key;
			Root = delet(Root, key); break;
		case 5: if (Root->key >= 0)
		{
			cout << "Дерево повернуто на 90 град. влево" << endl;
			view(Root, 0);
			cout << endl;
		}
			  else cout << "Дерево пустое\n"; break;
		case 6:
			delet(Root, maxKey);
			maxSumKey(Root, 0, 0, maxKey);
			cout << "maxKey: " << maxKey << endl;
			break;
		case 7: delAll(Root); break;
		case 8: exit(0);
		}
	}
	return 0;
}
Tree* makeTree(Tree* Root, int& maxKey) //Создание дерева
{
	int key, num; int s[2], sum = 0, sum1 = 0;
	cout << "Конец ввода - отрицательное число\n\n";
	if (Root == NULL) // если дерево не создано
	{
		cout << "Введите ключ корня: "; cin >> key;
		maxKey = key;
		cout << "Введите числа корня: ";
		for (int i = 0; i < 2; i++)
		{
			cin >> num;
			sum += num;
			s[i] = num;
		}

		Root = list(key, s); // установка указателя на корень
	}
	while (1) //добавление элементов
	{
		cout << "\nВведите ключ: "; cin >> key;
		if (key < 0) break; //признак выхода (ключ < 0)
		cout << "Введите числа: ";
		sum1 = 0;
		for (int i = 0; i < 2; i++)
		{
			cin >> num;
			sum1 += num;
			s[i] = num;
		}
		if (sum1 > sum) {
			sum = sum1;
			maxKey = key;
		}
		insertElem(Root, key, s);
	}
	cout << "maxKey: " << maxKey << endl;
	return Root;
}

Tree* list(int i, int* s) //Создание нового элемента
{
	Tree* t = new Tree[sizeof(Tree)];
	t->key = i;
	for (i = 0; i < 5; i++)
		*((t->numbers) + i) = *(s + i);
	t->Left = t->Right = NULL;
	return t;
}
 
Tree* insertElem(Tree* t, int key, int* s) //Добавление нового элемента
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
		t = list(key, s); //создается новый узел
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
		for (int i = 0; i < level; i++)
			cout << "     ";
		int tm = t->key;
		cout << tm << ' ';
		cout << "[";
		for (int i = 0; i < 2; i++)
		{
			cout << t->numbers[i] << " ";
		}
		cout << "]";
		cout << endl;
		view(t->Left, level + 1); //вывод левого поддерева
	}
}

void maxSumKey(Tree* t, int level, int buff, int& maxKey) //Вывод дерева
{
	int sum = 0;

	if (t)
	{
		maxSumKey(t->Right, level + 1, buff, maxKey); //вывод правого поддерева

		int tm = t->key;

		sum = t->numbers[0] + t->numbers[1];

		if (sum > buff) {
			buff = sum;
			maxKey = tm;
		}

		maxSumKey(t->Left, level + 1, buff, maxKey); //вывод левого поддерева
	}
	cout << "maxKey: " << maxKey << endl;

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