
#include <iostream>
#include <chrono>
using namespace std;
void main()
{
	
	setlocale(LC_ALL, "rus");
	int n,i,m,tmp,j,step,min,buf, counter=0;
	cout << "Введите размер" << endl;
	cin >> n;
	int* mas = new int[n];
	
	for ( i = 0; i < n; i++)
	{
		mas[i] = rand() % 100;
	}
	cout << "Первоначальный массив: ";
	for (i = 0; i < n; i++)
	{
		cout << mas[i] << " ";
	}
	cout << endl;
	for ( i = 0; i < n; i++)
	{
		if (mas[i] % 2 == 0)
		{
			counter++;
		}
	}
	
	int* B = new int[counter];
	int* C = new int[counter];
	for ( i = 0, m=0; i < n; i++)
	{
		if (mas[i]%2==0)
		{
			B[m]=mas[i];
			m++;
		}
	}
	for (i = 0; i < counter; i++)
	{
		C[i] = B[i];
	}
	auto start = std::chrono::high_resolution_clock::now();
	for (step = counter / 2; step > 0; step /= 2)
	{
		for (int i = step; i < counter; i++)
		{
			tmp = B[i];
			for (j = i; j >= step; j -= step)
			{
				if (tmp < B[j - step])
				{
					B[j] = B[j - step];
				}
				else
				{
					break;
				}

			}
			B[j] = tmp;
		}
	}
	auto end = std::chrono::high_resolution_clock::now();
	auto duration = std::chrono::duration_cast<std::chrono::nanoseconds>(end - start);
	cout << "Время сортировки: " << duration.count()<<endl;
	cout << "Сортировка Шелла: ";

	for (i = 0; i < counter; i++)
	{
		cout << B[i] << " ";
	}
	cout << endl;
	start = std::chrono::high_resolution_clock::now();
	for (int i = 0; i < counter; i++)
	{
		min = i;
		for (int j = i + 1; j < counter; j++)
		{
			min = (C[j] < C[min]) ? j : min;
		}
		if (i != min)
		{
			buf = C[i];
			C[i] = C[min];
			C[min] = buf;
		}
	}
	end = std::chrono::high_resolution_clock::now();
	duration = std::chrono::duration_cast<std::chrono::nanoseconds>(end - start);
	cout << "Время сортировки: " << duration.count() << endl;
	cout << "Сортировка выбором: ";
	for (i = 0; i < counter; i++)
	{
		cout << C[i] << " ";
	}

}