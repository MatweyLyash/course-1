#include <iostream>
#include <iterator>
#include <algorithm>
#include <ctime>
#include <string.h>
int main()
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	const int N = 100;
	int i, j, r, sz, A[N];
	int rmn = 0, rmx = 99;
	cout << "Введите размер массива ";
	cin >> sz;
	srand((unsigned)time(NULL));
	for (i = 0; i < sz; i++)
	{
		A[i] = rand() % rmx;
		cout << A[i] << " ";
	}
	int kmax = A[0];
	for (i = 1; i < sz; i++)
	{
		if (A[i] > kmax)
			kmax = A[i];

	}
	cout << "\n " << "kmax=" << kmax << endl;

	for (i = 0; i < sz; i++)
	{
		if (i%2 != 0)
		{
			A[i] = kmax;

		}
		cout << "" << A[i] << endl;

	}


}