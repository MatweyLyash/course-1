#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "rus");
	int min = 0, buf = 0;
	int staff = 0, price = 0;
	int choice = 0;
	cout << "Выберите задание:" << endl;
	cout << "1 - задание первое" << endl;
	cout << "2 - задание второе" << endl;
	cin >> choice;
	switch (choice)
	{
	case 1:
	{
		cout << "Введите количество товара (лютый стафф подЪехал): ";
		cin >> staff;
		if (staff < 0)
		{
			cout << "Товара не может быть отрицательное количество" << endl;
			return 0;
		}
		int sum = 0;
		int* mas = new int[staff];
		int* sortic = new int[staff];
		int* upSort = new int[staff];
		cout << endl;
		for (int i = 0; i < staff; i++)
		{
			mas[i] = rand() % 100 + 1;
		}

		//Сортиров0чка

		for (int i = 0; i < staff; i++)
		{
			sortic[i] = mas[i];
		}
		for (int i = 0; i < staff; i++)
		{
			min = i;
			for (int j = i + 1; j < staff; j++)
			{
				min = (sortic[j] < sortic[min]) ? j : min;
			}
			if (i != min)
			{
				buf = sortic[i];
				sortic[i] = sortic[min];
				sortic[min] = buf;
			}
		}
		int n = 0;
		for (int i = 0, n = staff - 1; n > 0, i < staff; i++, n--)
		{
			if (upSort[i] < upSort[n])
			{
				if (i % 2 == 0)
				{
					upSort[i] = sortic[i];
				}
				else
				{
					upSort[i] = sortic[n];
				}
			}
			else {
				if (i % 2 == 0)
				{
					upSort[i] = sortic[n];
				}
				else
				{
					upSort[i] = sortic[i];
				}
			}
		}
		for (int i = 0; i < staff; i++)
		{
			if (i % 2 == 0)
			{
				sum += upSort[i];
			}
			cout << upSort[i] << " ";
		}
		cout << "Максимальная сумма товаров: " << sum << endl;
		//что подразу
		delete[] mas;
		delete[]upSort;
		delete[]sortic;
		break;
	}
	case 2:
	{
		int winner;
		
		cout << "Введите кол-во призёров" << endl;
		cin >> winner;
		if (winner < 0)
		{
			cout << "Призёров не может быть отрицательное количество" << endl;
			return 0;
		}
		int* pris = new int[winner];
		int* qsort = new int[winner];
		srand(time(0));
		for (int i = 0; i < winner; i++)
		{
			pris[i] = rand() % 100 + 1;

		}
		for (int i = 0; i < winner; i++)
		{
			qsort[i] = pris[i];
		}
		for (int i = 0; i < winner; i++)
		{
			min = i;
			for (int j = i + 1; j < winner; j++)
			{
				min = (qsort[j] < qsort[min]) ? j : min;
			}
			if (i != min)
			{
				buf = qsort[i];
				qsort[i] = qsort[min];
				qsort[min] = buf;
			}

		}
		for (int i = 0; i < winner; i++)
		{
			cout << qsort[i] << " ";
		}
		//подсчёт призёров
		cout << endl << endl;
		int count = 0, size = winner - 1, max = qsort[size];
		bool flag = true;
		// << max << " ";
		while (max == qsort[size] && flag)
		{
			cout << max << " ";
			if (qsort[size - 1] != max) {
				max = qsort[size - 1];
				count++;
			}
			if (count == 3) {
				flag = false;
			}
			size--;
		}
		//cout <<"\nКоличество призёров: "<< counter;
		delete[] qsort;
		delete[] pris;
	}
	}
	return 0;
}
