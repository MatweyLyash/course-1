
#include <iostream>
#include <ctime>
int main()
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	const int N = 100;
	int i, k, j, r, sz, A[N];
	int rmn = 0, rmx = 99;
	cout << "Введите размер массива ";
	cin >> sz;
	srand((unsigned)time(NULL));
	for (i = 0; i < sz; i++)
	{
		A[i] = rand() % rmx;
		cout << A[i] << " ";

	}

	cout << endl << "Введите значение, которое хотите удалить   ";
	cin >> k;

	cout << endl << ":" << endl;
	for (i = 0; i < sz; i++)
	{
		if (A[i] == k)
		{
			for (j = i; j < sz; j++)
			{
				A[j] = A[j + 1];
			} sz--; A[j] = -1; i--;
		}
	}
	for (i = 0; i < sz; i++)

	{
		cout << A[i] << "  ";
	}
	/*for (i = sz; i <= sz; i++)
	{
		A[i] = rand() % 100;
		cout << A[i] << " ";

	}*/


	cout << endl << "с добавление единицы перед каждым чётным элементом:  ";

	for (i = 0; i < sz; i++)
	{

		if (A[i] % 2 == 0)
		{
			sz++; for (r = sz; r > i; r--)
			{
				A[r] = A[r - 1];
			}A[i] = 1; i++;
		}
	}

	for (i = 0; i < sz; i++) { cout << A[i] << "  "; }
}

