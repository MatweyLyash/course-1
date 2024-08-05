#include <iostream>
#include <time.h>
using namespace std;

void qsort(int* E, int left, int right)
{
	int i = left,//левая граница
		j = right;// правая граница
	int pivot = E[(left + right) / 2]; // разрешающий элемент

	while (i <= j)
	{
		while (E[i] < pivot) i++; // сдвигаем левую границу пока элемент [left] меньше [pivot]
		while (E[j] > pivot) j--;// сдвигаем правую границу пока элемент [right] больше [pivot]

		if (i <= j)
		{
			if (E[i] > E[j])
			{
				swap(E[i], E[j]);
			}

			i++; j--;
		}

	};
	// Рекурсивно вызываем сортировку для левой и правой части массива
	if (left < j) qsort(E, left, j);
	if (i < right) qsort(E, i, right);
}

int main()
{
	setlocale(LC_CTYPE, "rus");
	int n=0;
	clock_t start, stop;

	cout << "Введите кол-во чисел в массиве" << endl;
	cin >> n;
	int* mas = new int[n];
	int* B = new int[n];
	int* C = new int[n];
	int* D = new int[n];
	int* E = new int[n];

	for (int i = 0; i < n; i++)
	{
		mas[i] = rand() % 100;
	}
	cout << "Ваш массив: ";
	/*for (int i = 0; i < n; i++)
	{
		cout << mas[i] << " ";
	}*/
	cout << endl;
	cout << endl;
	
	//massiv B 
	for (int i = 0; i < n; i++)
	{
		B[i] = mas[i];
	}
	start = clock();
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < (n-1); j++)
		{
			if (B[j] > B[j + 1])
			{
				int b = B[j];
				B[j] = B[j + 1];
				B[j + 1] = b;
			}
		}
	}
	stop = clock();
	/////*for (int i = 0; i < n; i++)
	////{
	////	cout << B[i] << " ";
	////}*/

	cout << "\n\tВремя, затраченное на сортировку пузырьковым методом: "<<(stop-start)/ CLK_TCK << endl;
	//
	////massiv C (rabotaet ) сравнивание элемента с его предыдущими. 
	//При сравнении ему определяется место, где он ни меньше какого-то определённого элемента, и туда вставляется 
	int step, tmp ,j;
	for (int i = 0; i < n; i++)
	{
		C[i] = mas[i];
	}
	start = clock();
	for( step = n / 2; step > 0; step /= 2)
	{
		for (int i = step; i < n; i++)
		{
			 tmp = C[i];
			for ( j = i; j >= step; j -= step)//можно сказать одноразовый цикл
			{
				if (tmp < C[j - step])
				{
					C[j] = C[j - step];
				}
				else
				{
					break;
				}
				
			}
			C[j] = tmp;
		}
	}
	stop = clock();
	

	////for (int i = 0; i < n; i++)
	////{
	////	cout << C[i] << " ";
	////}
	cout << endl;
	cout << "\n\tВремя, затраченное на сортировку методом Шелла: " << (stop - start) / CLK_TCK << endl;
	cout << endl;


	////massiv D(метод выбором) (в массиве происходит поиск минимального числа,
	  //которое  при нахождении перемещеается в начало массив. ТАк илёт и дальше, 
	 //но уже числа более мин будут стоять правее от мин. 
	// так происходит до того момента, пока в массиве не останется только один несортированный элемент
	int min = 0, buf = 0;
	for (int i = 0; i < n; i++)
	{
		D[i] = mas[i];
	}
	start = clock();
	for (int i = 0; i < n; i++)
	{
		min = i; 
		for (int j = i + 1; j < n; j++)
		{
			min = (D[j] < D[min]) ? j : min;
		}
		if (i != min)
		{
			buf = D[i];
			D[i] = D[min];
			D[min] = buf;
		}
	}
	stop = clock();
	//

	///*for (int i = 0; i < n; i++)
	//{
	//	cout << D[i] << " ";
	//}*/
	//cout << endl;
	cout << "\tВремя, затраченное на сортировку выбора: " << (stop - start) / CLK_TCK << endl;
	//
	//massiv E
	for (int i = 0; i < n; i++)
	{
		E[i] = mas[i];
	}
	start = clock();
	qsort(E, 0, n-1);
	stop = clock();
	/*for (int i = 0; i < n; i++)
	{
		cout << E[i] << " ";
	}*/
	cout << "\tВремя, затраченное на быструю сортировку: " << (stop - start) / CLK_TCK << endl;
	cout << endl;
	delete[]mas;
	delete[]B;
	delete[]C;
	delete[]D;
	delete[]E;
}
