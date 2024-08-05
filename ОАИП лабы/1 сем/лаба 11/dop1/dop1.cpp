
#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <iostream>
    using namespace std;
    int main()
    {
        setlocale(LC_CTYPE, "Russian");
        int a[50];
        int i, N, k, x, m;
        cout << "Введите число N = ";
        cin >> N;
        cout << "Введите число m" << endl;
        cin >> m;
        k = 0;
        do
        {
            x = N % 10;   
            N = N / 10;   
            if (x % m == 0)  
            {
                a[k] = x;      
                k++;
                cout << x << endl;
            }
        } while (N > 0);

        cout << "Массив из цифр кратных числу m:";
        for (int i = k - 1; i >= 0; i--)
        {

            cout << a[i];

        }
    }

