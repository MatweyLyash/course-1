#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

void dopTask1()
{
    setlocale(LC_ALL, "Rus");
    // ��� ��� 2
    cout << "����� 2 " << endl;
    cout << "������� ���������� ����� ������������������ " << endl;
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
                cout << "����� �������������� �������� " << i + 1 << endl;
            }
            i++;
        }

    }
    cout << "���� ������������� ����� \n";
}
void dopTask2() {
    int n;
    // ��� ��� 6
    cout << "����� 6 " << endl;
    cout << "������� ���������� ����� ������������������ " << endl;
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
        cout << "�����: " << sum << "\n" << "������������: " << multip << endl;
    }
    else {
        cout << "�����: " << sum << "\n" << "������������: " << 0 << endl;
    }
}
void dopTask3() {
    int n;
    cout << "����� 7 " << endl;
    cout << "������� ���������� ����� ������������������ " << endl;
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
        cout << "������������ �������������: " << max_max << "\n"
            << "������������ �������������: " << "������������� ����� ����" << endl;
    }
    else {
        cout << "������������ �������������: " << max_max << "\n"
            << "������������ �������������: " << max_min << endl;
    }


}

// ��� ��� 7


