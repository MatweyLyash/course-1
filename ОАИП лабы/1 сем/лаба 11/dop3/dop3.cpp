#include <iostream>
int main() {
	setlocale(LC_CTYPE, "rus");
	using namespace std;
	srand(time(0));
	const int c = 10;
	int A[c], B[c],temp, i = 0;

	cout << "Массив А = ";
	for (int i = 0; i < c; i++)
	{
		A[i] = rand() % 10;
		cout << A[i] << " ";

	}
	cout << endl;
	cout << "Массив B = ";
	for (i = 0; i < c; i++) {
		B[i] = rand() % 10;
		cout << B[i] << " ";
	}
	cout << endl;
	int kmin = 0;
	for (i = 0; i < c; i++)
		if (A[i] < A[kmin])
			kmin = i;
	cout << "Минимальный элемент " << A[kmin] << endl;


	for (int i = 0; i < c - 1; i++) {
		for (int j = 0; j < c - i - 1; j++) {
			if (A[j] > A[j + 1]) {
				temp = A[j];
				A[j] = A[j + 1];
				A[j + 1] = temp;
			}
		}
	}
	for (int i = 0; i < c; ++i) {
		cout << A[i] << " ";
	}
	cout << endl;
	int buf;
	bool g = true;
	for (i = 0; i < c; i++) {
		for (int j = 0; j < c; j++) {
			if (A[i] != B[j]) {
				buf = i;
				g = false;//cout << A[i]<<" ";
				break;
			}
			
		}
}
	if (g) {
		cout << "Error" << endl;//cout << A[i] << " "; 
	}
	else {
		cout << A[buf] << " ";
	}
}











