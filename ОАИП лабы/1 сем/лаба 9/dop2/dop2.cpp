#include<iostream>
#include<clocale>
using namespace std;
int main()
{
    setlocale(0, "");
    const int n = 10;
    int x[n], i, a, b;
    srand(time(NULL));
    cout << "Введите элементы массива: ";//0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89
    for (i = 0; i < n; i++)
    {
        x[i] = rand() % 100;
        cout << x[i] << " ";
        a = 0;
        b = 1;
        while (x[i] > a && x[i] > b)
        {
            a = a + b;
            b = a + b;
        }
        if (x[i] == a || x[i] == b)
            break;
    }
    if (i == n)
        cout << "\nЧисел Фибоначчи нет" << endl;
    else
        cout << "\nПервое число Фибоначчи: " << x[i] << endl;

}