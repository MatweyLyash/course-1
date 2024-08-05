#include <iostream>
#include <string>
#include <Windows.h>
#include <stack>


using namespace std;

bool check_brackets(string s) {
    stack<char> st;//Создание стека
    for (int i = 0; i < s.length(); i++)
        {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[') 
        {
            st.push(s[i]);//Закидываем в стек открывающую скобку
        }
        else if (s[i] == ')')
        {
            if (st.empty() || st.top() != '(') //проверка на пустоту стека или на неправильное начало скобок
            {
                return false;//выход, если условие выше сработало
            }
            st.pop();//выкидываем со стека закрывающую скобку, которая была такой же как и открывающая
        }
        else if (s[i] == '}') 
        {
            if (st.empty() || st.top() != '{')
            {
                return false;
            }
            st.pop();
        }
        else if (s[i] == ']') 
        {
            if (st.empty() || st.top() != '[')
            {
                return false;
            }
            st.pop();
        }
    }
    return st.empty();//возbращает 1, если стек пустой, иначе 0
};


int main()
{
    string str;
    string nol;
    nol = '0';
    str = '1';
	setlocale(LC_ALL, "rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
    while(true) {
       
            cout << "Введите строку содержащую скобки разных видов: (){}[].\n Для выхода введите в строку 0" << endl;
            cin >> str;
            if (str == nol)
            {
                return 0;
            }
            
            if (check_brackets(str) == 0)
            {
                cout << "Скобки расставлены не верно" << endl;
               

            }
            else
            {
                cout << "Скобки расставлены верно" << endl;
            }
        
   
  
    }
	
}