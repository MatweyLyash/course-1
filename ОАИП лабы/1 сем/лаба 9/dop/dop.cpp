#include <iostream>

using namespace std;
int main()

{
    setlocale(LC_CTYPE, "rus");
    const int N = 100;
    int sz, i;
    cout << "Размер массива " << endl;

    cin >> sz;
    int arr[N];


    for (i = 0; i < sz; i++) {
        cout << "[" << i + 1 << "]" << ": ";
        cin >> arr[i];
    }


    cout << "\nВаш массив: ";

    for (i = 0; i < sz; ++i) {
        cout << arr[i] << " ";
    }

    cout << endl;
    if (arr[i] = arr[i - 1] + arr[i - 2])
    {
        cout << "Число Бучелатти найдено" << endl;
    }
    else {
        cout << "Числa Бучелатти нет:(" << endl;

    }


    
}