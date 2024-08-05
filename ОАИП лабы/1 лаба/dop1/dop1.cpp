#include <iostream>
using namespace std;
мой вариант
int as(int num, int first, ...) {
	int sum = 0, * ptr = &first;//инициализация указателя на первый параметр
	int* arr = new int[num];//выделение памяти под массив
	for (int i = 0; i < num; i++)
	{
		*(arr + i) = *(ptr + i);//т.к. при вызове функции первый параметр не передается, то указатель на первый параметр смещается на 1
		ptr++;
	}

	for (int i = 0; i < (num - 1); i++)// т.к. кол-во операций зависит от размера массива arr, то при операциях над ptr, 
	{                                  //который указывает на первый элемент массива arr, необходимо уменьшить размер на 1
		if (i % 2 == 0)//начало формулы идёт с -,далле +, следовательно всё зависит от порядка операции
		{
			sum += *(arr + i) * *(arr + i + 1);
		}
		else
		{
			sum-= *(arr + i) * *(arr + i + 1);
		}
	}
	return sum;
	delete []arr;
}

//void main()
//{
//
//	setlocale(LC_CTYPE, "rus");
//	cout << as(5, 2, 3, 4, 5, 1);//передача параметров в функцию as
//}

//2 вариант
//int fsum(int n, int first, ...) {
//	int* ptr = &first;
//	int mult = 1;
//	int sum = 0;
//	while (n--)
//	{
//		if (n)
//		{
//			mult = (*ptr) * (*(ptr + 2));
//			sum += mult;
//		}
//		ptr += 2;
//	}
//	return sum;
//}
//void main() {
//	cout << fsum(5, 2, 3, 4, 5, 1);
//	
//}

//вариант 5
int kvadr(int n, int first, ...) {
    int* ptr = &first;
    int count = 0;
    int koren = 0;
    while (n--) {
        koren = sqrt(*ptr);
        if (koren * koren == *ptr)
        {
            count++;
        }
        ptr += 2;
    }
    return count;
}
void main() {
	cout<<kvadr(5, 144, 4, 9, 16, 25);
	
}

//вариант 1
//int fmin(int num, int first, ...) {
//
//	int* ptr = &first;
//	int* numbers = new int[num];
//	for (int i = 0; i < num; i++)
//	{
//
//		*(numbers + i) = *(ptr + i);
//		ptr++;
//	}
//	int min = *numbers;
//
//	for (int i = 0; i < num; i++)
//	{
//		if (min > *(numbers + i))
//		{
//			min = *(numbers + i);
//		}
//	}
//
//	return min;
// delete[] numbers;
//}
// 
//int main()
//{
//	cout << fmin(5, 10, 22, 5, 7, 1);
//}






