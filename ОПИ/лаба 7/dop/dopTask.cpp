#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

void dopTask1()
{
    setlocale(LC_ALL, "Rus");
    // Доп вар 2
    cout << "Номер 2 " << endl;
    cout << "Введите количество чисел последовательности " << endl;
    int n, m, i, x;
    cin >> n;
    int* arr = new int[n];
    for (i = 0; i < n; i++) {

        cin >> m;
        arr[i] = m;

    }
    for (i = 0; i < n; i++)
    {
        while (i < n)
        {
            if (arr[i] < 0) {
                cout << "Номер отрицательного элемента " << i + 1 << endl;
            }
            i++;
        }

    }
    cout << "Нету отрицательных чисел \n";
}
void dopTask2() {
    int n;
    // Доп вар 6
    cout << "Номер 6 " << endl;
    cout << "Введите количество чисел последовательности " << endl;
    cin >> n;
    int multip = 1, sum = 0;
    bool z = false;
    for (int i = 0; i < n; i++) {
        int m;
        cin >> m;
        if (m < 0) {
            z = true;
            multip *= m;
        }
        else {
            sum += m;
        }
    }
    if (z) {
        cout << "Сумма: " << sum << "\n" << "Произведение: " << multip << endl;
    }
    else {
        cout << "Сумма: " << sum << "\n" << "Произведение: " << 0 << endl;
    }
}
void dopTask3() {
    int n;
    cout << "Номер 7 " << endl;
    cout << "Введите количество чисел последовательности " << endl;
    cin >> n;
    int minus;
    int max_min = -10000000;
    int max_max = 0;
    for (int i = 0; i < n; i++) {
        int m;
        cin >> m;
        if (m < 0 && max_min < m) {
            max_min = m;
        }
        else if (m > 0 && max_max < m) {
            max_max = m;
        }
    }
    if (max_min == -10000000)
    {
        cout << "Максимальный положительный: " << max_max << "\n"
            << "Максимальный отрицательный: " << "Отрицательных чисел нету" << endl;
    }
    else {
        cout << "Максимальный положительный: " << max_max << "\n"
            << "Максимальный отрицательный: " << max_min << endl;
    }


}

// Доп вар 7


