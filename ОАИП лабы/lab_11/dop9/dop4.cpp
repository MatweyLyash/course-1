﻿#include <iostream>
using namespace std;
struct Tree          //дерево
{
    int key;         //ключ
    char text[5];    //текст - не более 4 букв
    Tree* Left, * Right;
};

Tree* makeTree(Tree* Root);       //Создание дерева
Tree* list(int i, char* s);       //Создание нового элемента
Tree* insertElem(Tree* Root, int key, char* s);  //Добавление нового элемента
Tree* search(Tree* n, int key);   //Поиск элемента по ключу 
Tree* delet(Tree* Root, int key); //Удаление элемента по ключу
void view(Tree* t, int level);    //Вывод дерева 
int count(Tree* t, char letter);  //Подсчет количества слов
void delAll(Tree* t);             //Очистка дерева
int count_branches_to_key(Tree* root, int key); //Подсчет числа ветвей от корня до ближайшей вершины с заданным ключом

int c = 0;         //количество слов
Tree* Root = NULL;   //указатель корня

int main()
{
    setlocale(0, "Russian");
    int key, choice, n;
    Tree* rc; char s[5], letter;
    for (;;)
    {
        cout << "1 -  создание дерева\n";
        cout << "2 -  добавление элемента\n";
        cout << "3 -  поиск по ключу\n";
        cout << "4 -  удаление элемента\n";
        cout << "5 -  вывод дерева\n";
        cout << "6 -  подсчет количества букв\n";
        cout << "7 -  очистка дерева\n";
        cout << "8 -  подсчёт числа ветвей от корня до ближайшей вершины с заданным ключом\n";
        cout << "9 -  выход\n";
        cout << "ваш выбор?\n";
        cin >> choice;
        cout << "\n";
        switch (choice)
        {
        case 1:  Root = makeTree(Root);  break;
        case 2:  cout << "\nВведите ключ: "; cin >> key;
            cout << "Введите слово: "; cin >> s;
            insertElem(Root, key, s); break;
        case 3:  cout << "\nВведите ключ: ";  cin >> key;
            rc = search(Root, key);
            cout << "Найденное слово= ";
            puts(rc->text); break;
        case 4:  cout << "\nВведите удаляемый ключ: "; cin >> key;
            Root = delet(Root, key);  break;
        case 5:  if (Root->key >= 0)
        {
            cout << "Дерево повернуто на 90 град. влево" << endl;
            view(Root, 0);
        }
              else cout << "Дерево пустое\n"; break;
        case 6:  cout << "\nВведите букву: "; cin >> letter;
            n = count(Root, letter);
            cout << "Количество слов, начинающихся с буквы " << letter;
            cout << " равно " << n << endl; break;
        case 7:  delAll(Root); break;
        case 8:
            cout << "Введите ключ: ";
            cin >> key;
            int count1;
            count1 = count_branches_to_key(Root, key);
            cout << " (length = " << count1 << ")" << endl;
            break;
        case 9:  return 0;
        }
    }
}

Tree* makeTree(Tree* Root)    //Создание дерева
{
    int key; char s[5];
    cout << "Конец ввода - отрицательное число\n\n";
    if (Root == NULL)  // если дерево не создано
    {
        cout << "Введите ключ корня: "; cin >> key;
        cout << "Введите слово корня: "; cin >> s;
        Root = list(key, s);  // установка указателя на корень
    }
    while (1)                //добавление элементов
    {
        cout << "\nВведите ключ: ";  cin >> key;
        if (key < 0) break;       //признак выхода (ключ < 0)   
        cout << "Введите слово: ";  cin >> s;
        insertElem(Root, key, s);
    }
    return Root;
}

Tree* list(int i, char* s)     //Создание нового элемента
{
    Tree* t = new Tree[sizeof(Tree)];
    t->key = i;
    for (i = 0; i < 5; i++)
        *((t->text) + i) = *(s + i);
    t->Left = t->Right = NULL;
    return t;
}

Tree* insertElem(Tree* t, int key, char* s)  //Добавление нового элемента
{
    Tree* Prev = nullptr;  // Prev - элемент перед текущим
    int find = 0;        // признак поиска
    while (t && !find)
    {
        Prev = t;
        if (key == t->key)
            find = 1;     //ключи должны быть уникальны
        else
            if (key < t->key) t = t->Left;
            else t = t->Right;
    }
    if (!find)              //найдено место с адресом Prev
    {
        t = list(key, s);           //создается новый узел 
        if (key < Prev->key)  // и присоединяется либо 
            Prev->Left = t;    //переход на левую ветвь,
        else
            Prev->Right = t;   // либо на правую 
    }
    return t;
}