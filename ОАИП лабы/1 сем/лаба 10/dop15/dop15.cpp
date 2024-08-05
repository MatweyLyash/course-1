#include <iostream>
#include<windows.h>
#include <stdlib.h>
#include <bitset>
using namespace std;
int main() {

    setlocale(LC_CTYPE, "rus");
    //var 15.1
    //char tmp_2[33];
    // int maskA = 3,A,n;
    //int x = 0;
    //cout << "\nA=";
    //cin >> A;
    //_itoa_s(~A, tmp_2, 2);
    //cout << tmp_2 << endl;
    //if (tmp_2[31] == '0')
    //{
    //    x = 1;
    //}
    //if (tmp_2[30] == '0')
    //{
    //    x = 1;
    //}
    //if (x == 0)
    //{
    //    cout << "кратно 2";
    //}
    //else
    //{
    //    cout << "не кратно 2";
    //}

    //15.2

   

    char buffer[33];
    cout << "Введите число A: ";
    int a;
    cin >> a;

    _itoa_s(a, buffer, 2);
    cout << "В двоичном виде = " << buffer << '\n';

    cout << "Сколько битов вы хотите заменить на 0? ";
    int n;
    cin >> n;

    int position = -1;
    while (position < 1)
    {
        cout << "Начиная с какой позиции вы хотите их расположить ";
        cin >> position;
    }

    unsigned int mask = (1 << n) - 1;
    a &= ~(mask << (position ));

    _itoa_s(a, buffer, 2);
    cout << "\nНовая А=: " << buffer << endl;
}