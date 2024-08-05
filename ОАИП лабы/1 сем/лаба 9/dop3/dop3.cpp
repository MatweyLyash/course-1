#include<iostream>
#include<locale>
using namespace std;
void main() {
    const int size = 20; int k = 0;
    int arg[size];
    srand((unsigned)time(NULL));
    for (int i = 0; i < size; i++) {
        arg[i] = rand() % 2;
        cout << i << "\t" << arg[i] << endl;
    }
    for (int i = 0; i < size; i++) {
        if (arg[i] == arg[i + 1])
            k++;
    }
    cout << "n:" << k << endl;
}
