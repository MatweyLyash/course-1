#include <iostream>
using namespace std;
void main() {
	setlocale(LC_CTYPE, "rus");
	int const sz = 10;
	int i, A[sz], temp, k = 0;
	srand(time(NULL));
	cout << "Массив А = ";
	for (int i = 0; i < sz; i++)
	{
		A[i] = rand() % 10 + 1;
		cout << A[i] << " ";

	}
	cout << endl;
	int kmin = 0;
	for (i = 0; i < sz; i++)
		if (A[i] < A[kmin])
			kmin = i;
	cout << "Минимальный элемент " << A[kmin] << endl;
	for (int i = 0; i < sz - 1; i++) {
		for (int j = 0; j < sz - i - 1; j++) {
			if (A[j] > A[j + 1]) {
				temp = A[j];
				A[j] = A[j + 1];
				A[j + 1] = temp;
			}
		}
	}
	//for (int i = 0; i < sz; ++i) {
	//	cout << A[i] << " ";
	//}
	cout << endl;
	int buf = 0;
	//buf = A[0] - 1;
	//if (buf == 0) {
	//	buf = A[1] - 1;

	//	cout << "Число не может быть равно нуля" << buf << endl;
	//}
	//else{
	//	cout << buf << endl;
	//}
	for (i = 0; i < sz; i++) {
		if (A[i]+1==A[i+1]-1) {
			buf = A[i] + 1;
			if (A[0] > 1) {
				buf = 1;
			}
			break;
		}
	}

	cout << buf;
}