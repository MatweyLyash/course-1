#include <iostream>
#include <time.h>
using namespace std;
long long Fib(int size)
{
	if (size == 0)
	{
		return 0;
	}
	if (size == 1)
	{
		return 1;
	}
	return Fib(size - 1) + Fib(size - 2);
}


int main()
{
	setlocale(LC_ALL, "Russian");
	int i;
	clock_t start, stop;
	long long chislo = 0;
	long long tmp1 = 0;
	long long tmp2 = 1;
	int nomer = 0;
	cout << "Введите номер числа Фибоначчи: ";
	cin >> nomer;
	if (nomer == 0)
	{
		cout << "Число Фибоначчи:   " << tmp1;
		return 0;
	}
	if (nomer == 1)
	{
		cout << "Число Фибоначчи:    " << tmp2;
		return 0;
	}
	
	start = clock();
	for (i = 1; i < nomer; i++)
	{

		chislo = tmp1 + tmp2;
		tmp1 = tmp2;
		tmp2 = chislo;
	}
	stop = clock();
	cout << (stop - start) / CLK_TCK << " секунд(ы)" << endl;


	cout << "Число Фибоначчи в цикле: " << chislo << endl;
	
	start = clock();
	cout<<"Число в рекурсии: " << Fib(nomer) << endl;
	stop = clock();
	cout  << (stop - start) / CLK_TCK << " секунд(ы)" << endl;

}