
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

void res(int* a, int size, int& sum)
{
	int min = a[0];
	int max = a[0];
	for (int i = 0; i < size; i++)
	{
		if (a[i] < min)
			min = a[i];
		if (a[i] > max)
			max = a[i];
	}
	sum = min + max;
}

int main()
{
	setlocale(LC_CTYPE, "rus");
	int size;
	cout << "Введите размер массива: ";
	cin >> size;
	int* a = new int[size];
	for (int i = 0; i < size; i++)
	{
		cout << "Введите элемент " << i + 1 << ": ";
		cin >> a[i];
	}
	int sum;
	res(a, size, sum);
	cout << "Сумма максимального и минимального элементов массива: " << sum << endl;
	delete[]a;
	return 0;
}
	
//
//int task2(int**a, int n, int m) {
//	int count = 0;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			if (a[i][j] == 0)
//			{
//				count++;
//				break;
//			}
//		}
//	}
//	if (count == n)
//		return 1;
//	else
//		return 0;
//}
//
//int main()
//{
//	setlocale(LC_CTYPE, "rus");
//	srand(time(0));
//	int n, m, sum;
//	cout << "Введите размер матрицы: "<<endl;
//	cin >> n >> m;
//	cout << endl;
//	int**a = new int* [n];
//	for (int i = 0; i < n; i++)
//	{
//		a[i] = new int[m];
//	}
//	cout << "Матрица: " << endl;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			a[i][j] = rand() % 100-50;
//			cout << a[i][j] << " ";
//		}
//		cout << endl;
//	}
//	cout << endl;
//	if (task2(a, n, m) == 1)
//	{
//		cout << "Все строки матрицы содержат хотя бы один нулевой элемент" << endl;
//	}
//	else
//	{
//		cout << "Не все строки матрицы содержат хотя бы один нулевой элемент" << endl;
//		cout << "Матрица после замены отрицательных элементов на нулевые: " << endl;
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 0; j < m; j++)
//			{
//				if (a[i][j] < 0)
//					a[i][j] = 0;
//				cout << a[i][j] << " ";
//			}
//			cout << endl;
//		}
//	}
//	for (int i = 0; i < n; i++)
//	{
//		delete[] a[i];
//	}
//	delete[] a;
//	return 0;
//}


