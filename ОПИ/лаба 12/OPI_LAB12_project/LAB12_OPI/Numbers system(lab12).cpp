#include <iostream>

using namespace std;

inline int bit_calculator()
{
    setlocale(LC_ALL, "Rus");
    int number, buf;
    char tmp[33];
    cout << "Введите число\n";
    cin >> number;
    buf = number;
    
    cout << buf << " в восьмеричной:   " << oct << number << '\n';
    cout << dec << buf << " в десятичной: " << dec << number << '\n';
    cout << dec << buf << " в шеснацатиричной: " << hex << number << '\n';
    _itoa_s(number, tmp, 2);
    cout << dec << buf << " в двоичной:  " << tmp  << '\n';
    return 0;
    
}

