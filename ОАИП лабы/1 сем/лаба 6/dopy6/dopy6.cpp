#include <iostream>
void main()
{//доп 6
    using namespace std;
    setlocale(LC_ALL, "Russian");
    int n;
    do {
        cout << "n = ";
        cin >> n;
    } while (n < 1);

    int buf = n;
    for (int i = 2; i <= buf;) {

        int flag = 1;
        for (int j = 2; j < i; ++j)
            if (i % j == 0 && i != j) {
                flag = 0;
                break;
            }

        if (flag == 1 && buf % i == 0) {
            cout << i << endl;
            buf /= i;
        }
        else
            ++i;
    }
    

    //доп 4
    int a, b, c, d;
    for (int f = 1000; f <= 9999; f++)
    {
        a = f / 1000;
        b = f / 100 % 10;
        c = f / 10 % 10;
        d = f % 1000 % 10;

        if (a == d && a != b && b == c && f % 2 == 0 && f % 7 == 0 && f % 11 == 0 && a + b + c + d == 30)
        {
            cout << "Номер " << f << endl;
        }
    }
    //доп 3
    float с1, с2;
    cout << "Количество воды в первом сосуде ";
    cin >> с1;
    cout << "Количество воды во втором сосуде ";
    cin >> с2;
    for (int i = 1; i <= 4; i++)
    {
        с1 /= 2;
        с2 += с1;
        с2 /= 2;
        с1 += с2;

    }
    cout << "В первом сосуде " << с1 << endl << "Во втором сосуде " << с2 << endl;
}
