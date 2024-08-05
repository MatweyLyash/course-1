//#include <iostream>
//using namespace std;
//int main()
//{
//	setlocale(LC_ALL, "rus");
//	 float  * pArray, sum=0, min = 0;
//	 int n;
//	cout << "Введите количество вещественных элементов в массив:" << endl;
//	cin >> n;
//	pArray = new float[n + 1];
//
//	cout << "Введите вещественные элементы массива:" << endl;
//
//	for (int i = 0; i < n; i++) {
//		cin >> pArray[i];
//	}
//	cout << "Массив вещественных чисел" << endl;
//	for (int i = 0; i < n; i++) {
//		cout << pArray[i] << " ";
//	}
//	cout << endl;
//	for (int i = 0; i < n; i++) {
//		if (pArray[i] < min)
//		{
//			min = pArray[i];
//		}
//	}
//	cout << endl;
//cout << "Минимальный элемент массива = " << min << endl;
//
//int buf1 = 0, buf2 = 0;
//for (int i = 0; i < n; i++)
//{
//	if (pArray[i] > 0)
//	{
//		buf1 = i;
//		break;
//	}
//}
//for (int i = 0; i < n; i++)
//{
//	if (pArray[i] > 0)
//	{
//		buf2 = i;
//	}
//}
//
//for (int i = (buf1 + 1); i < buf2; i++)
//{
//	sum += pArray[i];
//}
//	cout << "Сумма элементов расположенных между первым и последним положительными элементами = " << sum << endl;
//
//delete[] pArray;
//}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> 
#include <iostream>
#include <malloc.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	float* pArray, sum = 0, min = 0;
	int n, count = 0;
	printf("Введите количество вещественных элементов в массив:\n");
	scanf("%d", &n);
	pArray = (float*)malloc(sizeof(float) * n);

	printf("Введите вещественные элементы массива: \n");

	for (int i = 0; i < n; i++) {

		scanf_s("%f",(pArray+i));
	}
	printf("Массив вещественных чисел\n");
	for (int i = 0; i < n; i++) {
		printf("%f", *(pArray+i)); printf(" ");
	}
	printf("\n");
	min = *pArray;
	for (int i = 0; i < n; i++) {
		if (*(pArray+i) < min)
		{
			min = *(pArray + i);
		}
	}
	printf("\n");
	printf("Минимальный элемент массива = %f\n", min);

	int buf1 = 0, buf2 = 0;
	for (int i = 0; i < n; i++)
	{
		if (*(pArray+i) > 0)
		{
			buf1 = i;
			break;
		}
	}
	for (int i = 0; i < n; i++)
	{
		if (*(pArray + i) > 0)
		{
			buf2 = i;
		}
	}

	for (int i = (buf1 + 1); i < buf2; i++)
	{
		sum += *(pArray + i);
	}

	printf("Сумма элементов расположенных между первым и последним положительными элементами = %f ", sum);

	free(pArray);
}
