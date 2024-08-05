
#include<iostream>
using namespace std;


int main() {
	const int N = 100;
	int matrix[N][N];
	int p, q, n, m;
	setlocale(LC_ALL, "rus");
	cout << "Введите кол-во элементов в столбце и строке в матрице: " << endl;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			matrix[i][j] = rand() % 10;
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
	cout << "Введите номера столбцов, которые Вы хотите поменять местами:"<<endl;
	cin >> p >> q;
	p = p - 1 ;
	q = q - 1 ;
	int temp;
	for (int i = 0; i < n; i++)
	{
			temp = matrix[i][q];
			matrix[i][q] = matrix[i][p];
			matrix[i][p] = temp;
	}
	cout << "Новая матрица:" << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
	
}


