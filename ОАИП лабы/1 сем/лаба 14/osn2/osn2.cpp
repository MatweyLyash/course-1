#include <iostream>
#include <stdlib.h>
#include <iomanip>
using namespace std;

int main() {
    setlocale(LC_ALL, "rus");
    int columns, rows;
    double** ptr;
   
    cout << "Введите количество столбцов матрицы: ", cin >> columns;
    cout << "Введите количество строк матрицы: ", cin >> rows;
 ptr= new double*[rows];

    srand((unsigned)time(NULL));

    for (int i = 0; i < rows; i++)
    {
        ptr[i]=new double[columns];
        for (int j = 0; j < columns; j++) {
            ptr[i][j] = rand() % 100 - 10;
        }
    }
    cout << "Матрица\n";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++) {
            cout << ptr[i][j] << '\t';

        }
        cout << endl;
        cout << endl;
    }
    int col = 0;
    bool f = true;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++) {
            if( ptr[i][j] < 0 && f) {
                col = i + 1;
                f = false;
                for (int i = 0; i < rows; i++)
                {
                    for (int j = 0; j < columns; j++) {
                        if (j + 1 == col) {
                            ptr[i][j] /= 2;
                        }
                    }
                }
                cout << "Номер строки с отрицатeльным элементом: " << col << endl;
            }
        }
    }

    if (col) {
        cout << "Изменённая матрица: " << endl;
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < columns; j++) {
                cout << ptr[i][j] << '\t';
            }
            cout << endl;
            cout << endl;
        }
    }
    else {
        cout << "Отрицательных элементов нет\n";
    }
    for (int k = 0; k < columns*rows; k++) 
        delete[] ptr[k];
    delete[] ptr;

}