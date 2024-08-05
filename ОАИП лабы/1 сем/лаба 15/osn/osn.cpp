#include <iostream>
#include <string>

using namespace std;

void main1(char *str,  char *first,char *last, char *ptr  )
{
	setlocale(LC_ALL, "Russian");
	
	int i = 0, count = 0, len = 0, flag;

		
		while (str[i]) {
			if (str[i] != ' ' && str[i] != '\n')
				len++;
			else {
				if (str[i - 1] != ' ') {
					for (last = &str[i - 1], ptr = first = last - len + 1, flag = 0; first < last; first++, last--) {
						if (*last != *first) {
							flag = 1;
							break;
						}
					}
					if (!flag) {
						first = ptr;
						while (*first != ' ' && *first != '\n')
							putchar(*first++);
						count++;
						putchar('\n');
					}
					len = 0;
				}
			}
			i++;
		}
		printf("Итог: %d слов(o/a).\n", count);
		
	}


void main2() {
	setlocale(LC_ALL, "Russian");
	int N;
	cout<< "ARR_SIZE: "<< endl;
	cin>> N;
	

	int** arr;

	arr = (int**)malloc(N * sizeof(int*));
	for (int i = 0; i < N; i++) {
		arr[i] = (int*)malloc(N * sizeof(int));
	}

	cout<< "Матрица:"<< endl;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			/*cin>> arr[i][j];*/
			arr[i][j] = rand() % 10;
		}
	}
	cout<< endl;

	cout<< "Начальная матрица: "<< endl;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cout<< " "<< arr[i][j];
		}
		cout<< endl;
	}

	cout<< endl;

	int a;
	int count = 1;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			a = arr[i][j];
			for (int k = 1; k < N; k++) {
				if ((a == arr[i][j + k]) || (a == arr[i][j - k])) {
					count++;
				}
			}
			if (count < 2) {
				arr[i][j] = 0;
			}
			count = 1;
		}
	}
	cout <<"Новая матрица: "<< endl;
	for (int i = 0; i < N; i++) {

		for (int j = 0; j < N; j++) {
			cout<< " "<< arr[i][j];
		}
		cout<< endl;
	}

	for (int i = 0; i < N; i++) {
		delete[] arr[i];
	}
	delete[] arr;
}



int main() {
	setlocale(LC_ALL, "Russian");
	int number;
	char str[255] = "", * first{}, * last{}, * ptr{};
	int i = 0, count = 0, len = 0, flag = 0;
	bool state = std::ios::sync_with_stdio(false);
	cout<< "Выберите проект который хотите посмотреть:"<< endl;
	cout<< "1 - Задание 1 "<< endl;
	cout <<"2 - Задание 2"<< endl;

	cin>> number;

	switch (number)
	{
	case 1:
		main2();
		break;
	case 2:
		std::cin.ignore(std::cin.rdbuf()->in_avail());
		fgets(str, 255, stdin);
		std::ios::sync_with_stdio(state);
		main1(str, first,  last,  ptr);
		break;

	}

	return 0;
}
//#include<iostream>
//#include<cstring>
//using namespace std;
//
//void foo1(int n, int* arr[])
//{
//
//
//	for (int i = 0; i < n - 1; i++)
//		for (int j = 0; j < n; j++)
//			arr[i][j] -= arr[i + 1][j];
//
//	for (int i = 0; i < n - 1; i++) {
//		arr[n - 1][i] -= arr[0][i];
//	}
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			cout << arr[i][j] << " ";
//		}
//		cout << endl;
//	}
//}
//int foo2()
//{
//	string str = "car 41 62 3 bear  12 fggf 2 ";
//	int* arr1 = new int[5] {};
//	int n = 0, sum = 0;
//	for (int i = str.length(); i > 0; i--) {
//		if ('0' < str[i] && str[i] <= '9') {
//			for (int j = 0; str[i - j] != ' '; j++) {
//				arr1[n] += (str[i - j] - '0') * pow(10, j);
//			}
//			n++;
//			i--;
//		}
//
//	}
//	for (int i = 0; i < 5; i++) {
//		cout << arr1[i] << ' ';
//		sum += arr1[i];
//	}
//	return sum;
//}
//
//
//
//void main()
//{
//	setlocale(0, "");
//	int n;
//	cout << "выберите номер задания ";
//	cout << "1: массив; 2: строка\n";
//	cin >> n;
//	switch (n)
//	{
//	case 1: {
//		cout << "введите размер  массива: ";
//		cin >> n;
//		int** arr = new int* [n];
//		for (int i = 0; i < n; i++)
//			arr[i] = new int[n];
//
//		cout << "Введите " << n * n << " элементов:\n";
//		for (int i = 0; i < n; i++) {
//			for (int j = 0; j < n; j++) {
//				cout << "arr[" << i + 1 << "." << j + 1 << "]: ";
//				cin >> arr[i][j];
//			}
//		}
//		foo1(n, arr);
//		break;
//	}
//	case 2: {
//		cout << foo2();
//		break;
//	}
//
//	default: {
//		cout << "введите коректный вариант";
//		break;
//	}
//	}
//}
