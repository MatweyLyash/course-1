#include <iostream>
#include <stdio.h>

int main() {

    srand(time(NULL));
    using namespace std;
    const int n = 10;

    int A[n], B[n], i;
    int S[n];
    cout << "A: ";
    for (i = 0; i < n; i++) {
        A[i] = rand() % 10;
        cout << A[i] << "   ";
    }
    cout << endl;
    cout << "B: ";
    for (i = 0; i < n; i++) {
        B[i] = rand() % 30;
        cout << B[i] << "   ";
    }
    cout << endl;
    cout << "S: ";
    for (int i = 0; i < n; ++i)
    {
        S[i] = A[i] + B[i];
        cout << S[i] << "   ";
    }
    return 0;
}