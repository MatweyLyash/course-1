#include<stdio.h>
#include <windows.h>
#include "case.h"
#include <string>

using namespace std;
int case1() {
    string end;
    char f;
    char c;
    unsigned int k;
    for (int i = 1; i < 8; i++) {
        cout << "Введите букву в прописном написании: \n"; cin>> c;
        cout << "Введите букву в строчном написании: \n"; cin >> f;

        if (65 <= c && c <= 90 && 97 <= f && f <= 122) {
            k = int(f) - int(c);
            if (k != 32) {
                cout << "Ошибочный ввод" << endl;
                break;
            }
            cout << "Код вашего символа:" << "0x" << hex << int(c) << endl;
            cout << "Код вашего символа:" << "0x" << hex << int(f) << endl;


            if (k == 32) {
                cout << "Разница между кодами: " << k << endl;
            }
            cout << " Введите end, дабы не начать новый оборот колеса Сансары" << endl;
            cin >> end;
            if (end == "end") {
                return(0);
            }
            else
            {
                cout << "Продолжение " << endl;
            }
        }


    }
}
int case2() {
    char c;
    char f; string end; unsigned int k;
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    for (int i = 1; i < 8; i++) {
        cout << "Введите букву в прописном написании: \n"; cin >> c;
        cout << "Введите букву в строчном написании: \n"; cin >> f;

        if (-64 <= c && c <= -33 && -32 <= f && f <= -1) {
            k = int(f) - int(c);
            if (k != 32) {
                cout << "Ошибочный ввод" << endl;
                break;
            }
            cout << "Код вашего символа:" << "0x" << hex << int(c) << endl;
            cout << "Код вашего символа:" << "0x" << hex << int(f) << endl;


            if (k == 32) {
                cout << "Разница между кодами: " << k << endl;
            }
            cout << " Введите end, дабы не начать новый оборот колеса Сансары, либо введите любой символ дабы продолжить" << endl;
            cin >> end;
            if (end == "end") {
                return(0);
            }
            else
            {
                cout << "C Т Р А Д А Н И Е" << endl;
            }
        }

        else {
            cout << "продолжаем" << endl;

        }
    }
}
int case3()
{
    char c;
    string end;
    for (int i = 1; i < 8; i++)
    {
        cout << "Введите цифру :"; cin >> c;
        if (48 <= c && c <= 57) {
            cout << "Код символа = " << "0x" << hex << int(c) << endl;
        }
        else {
            cout << "Ошибочный ввод" << endl;
        }
        cout << " Введите end, дабы не начать новый оборот колеса Сансары, либо введите любой символ дабы продолжить" << endl;
        cin >> end;
        if (end == "end") {
            return(0);
        }
        else
        {
            cout << "C Т Р А Д А Н И Е" << endl;
        }
}
}