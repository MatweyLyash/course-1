#include <iostream>
#include <algorithm>
#include "dopTask.h"
using namespace std;

void task() {
	cout << "Задание 8\n";

	int n_1 = 6, n_2 = 5;
	double a[6] = { 3, 12, -4, 6.2, 3, 0.4 },
		b[6] = { 19, 1, -24, 4.2, 8 }, result, c = 0.7,
		sum1 = 0, sum2 = 0;
	for (int i = 1; i <= n_1; i++)
	{
		sum1 += a[i - 1];
	}
	for (int i = 1; i <= n_2; i++)
	{
		sum2 += pow((b[i - 1] - 1), 2);
	}

	result = sum1 - c * sum2;

	cout << "result= " << result << endl;;

}

void taskDop() {
	cout << "Задание 3\n";

	double m = 5, x[6] = { -2, 6, 1.1, 2.7, 4 }, sum1 = 0, result;
	for (int i = 1; i <= m; i++)
	{
		sum1 += pow(x[i - 1] - 2, 2);
	}
	result = 8 * x[3] + sum1;
	cout << "result= " << result << endl;
}

void taskDop1() {
	cout << "Задание 12\n";

	double x[6] = { 1, 2.7, 4.7, 6, 10 }, result, sum1 = 0;

	double* z = max_element(begin(x), end(x));//находим максимальный элемент массива

	for (int i = 1; i <= 5; i++)
	{
		sum1 += pow(x[i - 1], 2);
	}

	result = *z * sum1;
	cout << "result= " << result << endl;
}

void taskDop2() {
	cout << "Задание 5\n";

	double a = 1.5, b = -4.15, v[6] = { 1, 1.5, -4, -1.9, 3 }, sum1 = 0, result;
	for (int i = 0; i <= 4; i++) {
		if (v[i] > 0) {
			result = a + v[i];
			cout << "result1= " << result << endl;
		}
		else {
			result = b / v[i];
			cout << "result2= " << result << endl;
		}
	}

}



int main()
{
	setlocale(LC_ALL, "Rus");
	task();
	taskDop();
	taskDop1();
	//taskDop2();
	//dopTask1();
	//dopTask2();
	//dopTask3();
}


