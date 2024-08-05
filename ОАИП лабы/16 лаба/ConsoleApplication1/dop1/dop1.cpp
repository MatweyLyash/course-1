#include <iostream>
#include <chrono>
#include <time.h>
using namespace std;
void main()
{
	setlocale(LC_ALL, "rus");
	int i, j = 0, n, min, buf, counter = 0;
	cout << "Введите размер" << endl;
	cin >> n;
	int* mas = new int[n];
	for (i = 0; i < n; i++)
	{
		mas[i] = rand() % 100;
	}
	for (i = 0; i < n; i++)
	{
		if (i % 2 == 0)
		{
			counter++;
		}
	}
	cout << "\n" << counter << endl;
	int* B = new int[counter];
	for (i = 0; i < n; i++)
	{
		if (i % 2 == 0)
		{
			B[j] = mas[i];
			j++;
		}
	}
	for (i = 0; i < counter; i++)
	{
		cout << B[i] << " ";
	}

	cout << "\nОтсортированный пузырьком В" << endl;
	auto start = std::chrono::high_resolution_clock::now();
	for (i = 0; i < counter; i++)
	{
		for (j = 0; j < (counter - 1); j++)
		{
			if (B[j] < B[j + 1])
			{
				int b = B[j];
				B[j] = B[j + 1];
				B[j + 1] = b;
			}
		}
	}
	auto end = std::chrono::high_resolution_clock::now();
	auto duration = std::chrono::duration_cast<std::chrono::nanoseconds>(end - start);
	cout << "Время сортировки: " << duration.count() << endl;
	for (i = 0; i < counter; i++)
	{
		cout << B[i] << " ";
	}

	cout << "\nОтсортированный простой вставкой В" << endl;
	start = std::chrono::high_resolution_clock::now();
	for (i = 1; i < counter; i++)
	{
		int key = B[i];
		j = i - 1;
		while (j >= 0 && B[j] < key)
		{
			B[j + 1] = B[j];
			j--;
		}
		B[j + 1] = key;
	}
	end = std::chrono::high_resolution_clock::now();
	duration = std::chrono::duration_cast<std::chrono::nanoseconds>(end - start);
	cout << "Время сортировки: " << duration.count() << endl;

	for (i = 0; i < counter; i++)
	{
		cout << B[i] << " ";
	}

}