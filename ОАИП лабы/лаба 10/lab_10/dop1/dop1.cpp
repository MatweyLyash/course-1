#include <iostream>
#include <string>
#include <fstream>
using namespace std;
void dop1(int size, int* arr, int tmp)
{

	ofstream file("data.txt", ios_base::app);
	for (int i = 0; i <= size; i++) {
		arr[tmp] = i;
		if (tmp == size - 1) {
			for (int j = 0; j < size; j++)
			{
				cout << arr[j];
				file << arr[j];
			}
			cout << " ";
			file << " ";
		}
		else
			dop1(size, arr, tmp + 1);
	}
	file.close();
}

static char dop4(char* arr, const int& n, int m) {
	if (m < 26) dop4(arr, n, m + 1);
	if (m == 26) return arr[n + m];
}

void swap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}
void printSwap(int arr[], int start, int end)// Рекурсивная функция для печати всех перестановок
{
	// Если начальный индекс равен конечному, то распечатываем текущую перестановку
	if (start == end)
	{
		for (int i = 0; i <= end; i++)
			cout << arr[i] << " ";
		cout << endl;
	}
	else
	{
		// Иначе перебираем все элементы от начального индекса до конечного
		for (int i = start; i <= end; i++)
		{
			// Меняем местами элементы arr[start] и arr[i]
			swap(arr[start], arr[i]);

			// Рекурсивно печатаем все перестановки, начиная с элемента arr[start+1]
			printSwap(arr, start + 1, end);

			// Меняем элементы обратно, чтобы восстановить изначальный порядок
			swap(arr[start], arr[i]);
		}
	}
}

int main()
{ 
	int A = 0;
	setlocale(LC_CTYPE, "rus");
	cout << "Dop1" << endl;
	cin >> A;
	int* arr = new int[A];
	if (A == 1)
	{
		cout << 0 << " ";
		cout << 1 << '\n';

	}
	else
		for (int i = 1; i <= A; i++)
		{
			arr[0] = i;
			dop1(A, arr, 1);
		}






	cout << "\ndop4" << endl;
	int max = 26;
	constexpr int size = 52;
	char array[size];
	int n = 0;
	for (int i = 0; i < max; i++)
	{
		array[i] = 'a' + i;
		array[i + max] = 'A' + i;
	}
	do
	{
		cout << "Введите число n меньше 26 и больше нуля: ";
		cin >> n;
		if (n < 0)
		{
			break;
		}
		n = n - 1;
		for (int i = 0; i < size; i++) {
			cout << i+1  << ". " << array[i] << endl;
		}
		cout << endl;
		cout << "Искомый символ: " << dop4(array, n, 0) << endl;
	} while (n>0);

	cout << "dop3" << endl;
	int num = 0;
	int amount = 5;
	int massiv[5];
	cout << "Введите 5 элементов" << endl;
	for (int i = 0; i <5; i++)
	{
		cin >> num;
		massiv[i] = num;

	}
	printSwap(massiv, 0, amount - 1);

	return 0;
}