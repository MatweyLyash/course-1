//#include <iostream>
//using namespace std;
//int main() {
//	const int N = 20;
//	int matrix[N][N];
//	int  n, m, j, i, coun = 0;
//	setlocale(LC_ALL, "rus");
//	//srand(time(0));
//	cout << "введите кол-во элементов в столбце и строке матрицы: " << endl;
//	cin >> m;
//	cin >> n;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			matrix[i][j] = rand() % 17 - 5;
//			cout << matrix[i][j] << " ";
//		}
//		cout << endl;
//	}
//	int flag = 0, sum = 0;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			sum = 0;
//			if (matrix[i][j] > 0)
//			{
//				coun++;
//			}
//			if (coun == m)
//			{
//				cout << "строка " << i + 1 << " имеет только положительные элементы" << endl;
//				for (j = 0; j < m; j++) {
//					sum += matrix[i][j];
//				}
//				cout << "сумма строки равна: " << sum << endl;
//				flag++;
//				break;
//			}
//		}
//		coun = 0;
//		if (flag == 1)
//		{
//			break;
//		}
//
//	}
//	cout << "Измененная матрица: " << endl;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			matrix[i][j] = matrix[i][j] - sum;
//			cout << matrix[i][j] << " ";
//		}
//		cout << endl;
//	}
//
//}

#include <iostream>
using namespace std;
int main() {
	const int N = 20;
	int matrix[N][N];
	int  n, m, j, i, coun = 0;
	setlocale(LC_ALL, "rus");
	/*srand(time(NULL));*/
	cout << "Введите кол-во элементов в столбце и строке матрицы: " << endl;
	cin >> n >> m;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			*(*(matrix + i) + j) = rand() % 17 - 5;
			cout << *(*(matrix+i)+j) << " ";
		}
		cout << endl;
	}
	int flag = 0, sum = 0;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			sum = 0;
			if (*(*(matrix + i) + j) > 0)
			{
				coun++;
			}
			if (coun == m)
			{
				cout << "Строка " << i + 1 << " имеет только положительные элементы" << endl;
				for (j = 0; j < m; j++) {
					sum +=  *(*(matrix+i)+j);
				}
				cout << "Сумма строки равна: " << sum << endl;
				flag++;
				break;
			}
		}
		coun = 0;
		if (flag == 1)
		{
			break;
		}
	}
	cout << "Измененная матрица: " << endl;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			*(*(matrix + i) + j) =  * (*(matrix + i) + j) - sum;
			cout << *(*(matrix + i) + j) << " ";
		}
		cout << endl;
	}

}