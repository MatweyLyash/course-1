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
        cout << "������� ����� � ��������� ���������: \n"; cin>> c;
        cout << "������� ����� � �������� ���������: \n"; cin >> f;

        if (65 <= c && c <= 90 && 97 <= f && f <= 122) {
            k = int(f) - int(c);
            if (k != 32) {
                cout << "��������� ����" << endl;
                break;
            }
            cout << "��� ������ �������:" << "0x" << hex << int(c) << endl;
            cout << "��� ������ �������:" << "0x" << hex << int(f) << endl;


            if (k == 32) {
                cout << "������� ����� ������: " << k << endl;
            }
            cout << " ������� end, ���� �� ������ ����� ������ ������ �������" << endl;
            cin >> end;
            if (end == "end") {
                return(0);
            }
            else
            {
                cout << "����������� " << endl;
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
        cout << "������� ����� � ��������� ���������: \n"; cin >> c;
        cout << "������� ����� � �������� ���������: \n"; cin >> f;

        if (-64 <= c && c <= -33 && -32 <= f && f <= -1) {
            k = int(f) - int(c);
            if (k != 32) {
                cout << "��������� ����" << endl;
                break;
            }
            cout << "��� ������ �������:" << "0x" << hex << int(c) << endl;
            cout << "��� ������ �������:" << "0x" << hex << int(f) << endl;


            if (k == 32) {
                cout << "������� ����� ������: " << k << endl;
            }
            cout << " ������� end, ���� �� ������ ����� ������ ������ �������, ���� ������� ����� ������ ���� ����������" << endl;
            cin >> end;
            if (end == "end") {
                return(0);
            }
            else
            {
                cout << "C � � � � � � � �" << endl;
            }
        }

        else {
            cout << "����������" << endl;

        }
    }
}
int case3()
{
    char c;
    string end;
    for (int i = 1; i < 8; i++)
    {
        cout << "������� ����� :"; cin >> c;
        if (48 <= c && c <= 57) {
            cout << "��� ������� = " << "0x" << hex << int(c) << endl;
        }
        else {
            cout << "��������� ����" << endl;
        }
        cout << " ������� end, ���� �� ������ ����� ������ ������ �������, ���� ������� ����� ������ ���� ����������" << endl;
        cin >> end;
        if (end == "end") {
            return(0);
        }
        else
        {
            cout << "C � � � � � � � �" << endl;
        }
}
}