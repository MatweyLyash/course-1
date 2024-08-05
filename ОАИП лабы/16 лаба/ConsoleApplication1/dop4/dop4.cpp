#include <iostream>
#include <ctime>
#include <chrono>
using namespace std;
void swapEl(int* arr, int i)
{
	int buff;
	buff = arr[i];
	arr[i] = arr[i - 1];
	arr[i - 1] = buff;
}

void shakerSort(int* arr, int size)
{
	int leftMark = 1;
	int rightMark = size - 1;
	while (leftMark <= rightMark)
	{
		for (int i = rightMark; i >= leftMark; i--)
			if (arr[i - 1] < arr[i]) swapEl(arr, i);
		leftMark++;


		for (int i = leftMark; i <= rightMark; i++)
			if (arr[i - 1] < arr[i]) swapEl(arr, i);
		rightMark--;
	}
}
void Shell(int A[], int n) 
{
	int i, j, d, count;
	d = n;
	d = d / 2;
	while (d > 0)
	{
		for (i = 0; i < n - d; i++)
		{
			j = i;
			while (j >= 0 && A[j] < A[j + d])
			{
				count = A[j];
				A[j] = A[j + d];
				A[j + d] = count;
				j--;
			}
		}
		d = d / 2;
	}
}
void main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	int n,i,j,min=101, counter=0;
	cout << "Введите размер:" << endl;
	cin >> n;
	int* A = new int[n];
	int* B = new int[n];
	
	for (i = 0; i < n; i++)
	{
		A[i] = rand() % 100;
	}
	cout << "первоначальный А" << endl;
	for (i = 0; i < n; i++)
	{
		cout << A[i] << " ";
	}
	for (i = 0; i < n; i++)
	{
		B[i] = rand() % 100;
	}
	cout << "\nпервоначальный В" << endl;
	for (i = 0; i < n; i++)
	{
		cout << B[i] << " ";
	}

	cout << endl;

	for (i = 0; i < n; i++)
	{
		if (B[i] < min) min = B[i];
	}
	cout << min << endl;
	for (i = 0; i < n; i++)
	{
		if (A[i] > min) {
			counter++;
		}
	}
	int* C = new int[counter];
	for (i = 0,j=0; j<n; j++)
	{
		if (A[j] > min)
		{
			C[i] = A[j];
			i++;
		}
	}
	for (i = 0; i < counter; i++)
	{
		cout << C[i]<< " ";
	}
	auto start = std::chrono::high_resolution_clock::now();
	shakerSort(C, counter);
	auto end = std::chrono::high_resolution_clock::now();
	cout << "\nОтсортированный шейкером С" << endl;
	auto duration = std::chrono::duration_cast<std::chrono::nanoseconds>(end - start);
	cout << "Время сортировки: " << duration.count() << endl;
	for (i = 0; i < counter; i++)
	{
		cout << C[i] << " ";
	}
	start = std::chrono::high_resolution_clock::now();
	Shell(C, counter);
	end = std::chrono::high_resolution_clock::now();
	duration = std::chrono::duration_cast<std::chrono::nanoseconds>(end - start);
	cout << "Время сортировки: " << duration.count() << endl;
	cout << "\nОтсортированный Шеллом С" << endl;
	for (i = 0; i < counter; i++)
	{
		cout << C[i] << " ";
	}

}
