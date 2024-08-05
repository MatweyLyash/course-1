#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    srand(time(NULL));


    //Доп.1


    cout << "Доп eins" << endl;

    int n = 0, d = 0;
    cout << "Введите кол-во чисел в последовательности ";
    cin >> n;

    int* arr = new int[n];      //Выделение памяти под динамический массив

    for (int i = 0; i < n; i++)    //Заполнение динамического массива
    {
        arr[i] = rand();
    }

    for (int i = 0; i < n; i++)    //Вывод динамического массива в консоль
    {
        cout << arr[i] << endl;
    }

    for (int i = 0; i < n; i++)    //Проверка условия задания
    {
        if (arr[i] % 2 == 0)
        {
            d += arr[i];
        }
    }

    cout << "Сумма = " << d << endl;    //Вывод суммы

    delete[] arr;          //Освобождение памяти


    //Доп.2


    cout << "Доп. zwei" << endl;

    int n1 = 0;
    cout << "Введите кол-во чисел в последовательности ";
    cin >> n1;

    int* arr_1 = new int[n1];      //Выделение памяти под динамический массив

    for (int i = 0; i < n1; i++)    //Заполнение динамического массива
    {
        arr_1[i] = rand() - 10000;
    }

    for (int i = 0; i < n1; i++)    //Вывод динамического массива в консоль
    {
        cout << arr_1[i] << endl;
    }

    for (int i = 0; i < n1; i++)    //Проверка условия задания
    {
        if (arr_1[i] < 0)
        {
            cout << "Номер первого отрицательного числа = " << i + 1 << endl;
            break;
        }
    }

    delete[] arr_1;          //Освобождение памяти


    //Доп.6


    cout << "Доп.sechs" << endl;


    int n_2 = 0, sum = 0, umn = 1;
    cout << "Введите кол-во чисел в последовательности ";
    cin >> n_2;

    int* arr_2 = new int[n_2];      //Выделение памяти под динамический массив

    for (int i = 0; i < n_2; i++)
    {
        arr_2[i] = rand() - 10000;    //Заполнение массива
    }

    for (int i = 0; i < n_2; i++)    //Вывод массива в консоль
    {
        cout << arr_2[i] << endl;
    }

    for (int i = 0; i < n_2; i++)    //Проверка условия
    {
        if (arr_2[i] > 0)
        {
            sum += arr_2[i];
        }

        if (arr_2[i] < 0)
        {
            umn *= arr_2[i];
        }
    }

    cout << "Сумма = " << sum << endl;
    cout << "Произведение отрицательных = " << umn << endl;

    delete[] arr_2;

}