//
//
#include <iostream>
#include <stdio.h>
#include <locale.h>
#include <Windows.h>

//int main() {
//	setlocale(LC_CTYPE, "rus");
//	const int N = 256;
//	int i = 0;
//	int n = 0;
//	int count = 1;
//	long float temp1 = 0;
//	long float temp2 = 0;
//	long float vvod = 0;
//	long float str[N] = {};
//	long double a;
//	FILE* fA;
//	fopen_s(&fA, "fA.txt", "r");
//	if (fA == NULL)
//	{
//		printf("Oshibka\n");
//	}
//	else
//	{
//		while (!feof(fA))
//		{
//			fscanf_s(fA, "%lf ", &a);
//			str[i] = a;
//			i++;
//
//		}
//		n = i;
//		printf("Введите целое число:\n");
//		scanf_s("%lf", &vvod);
//		temp1 = vvod - str[0];
//		if (temp1 < 0)
//			temp1 *= -1;
//		for (i = 1; i < n; i++)
//		{
//			temp2 = vvod - str[i];
//			if (temp2 < 0)
//				temp2 *= -1;
//
//			if (temp1 > temp2)
//			{
//
//				count = i + 1;
//				temp1 = temp2;
//
//			}
//
//
//		}
//		printf(" Порядковый номер числа, которое наиболее близко находится к введённому: %d", count);
//		fclose(fA);
//	}
//
//
//
//}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_CTYPE, "rus");
	FILE* F1;
	FILE* F2;
	fopen_s(&F1, "F1.txt", "r");
	fopen_s(&F2, "F2.txt", "w");
	
	if (F1 == NULL || F2 == NULL)
	{
		perror("Ошибка открытия файла\n");
		return EXIT_FAILURE;
	}
	else
	{
		printf("Файлы открыты!\n");
	}

	char tmp, str[50]={};
	int counter = 1;
	while (!feof(F1))
	{
		fread(&tmp, sizeof(char), 1, F1);
		if (tmp == '\n')
		{
			counter++;
		}
		if (counter % 2 == 0)
		{
			fgets(str, 50, F1);
			fputs(str, F2);
			counter = 1;
		}
	}
	fclose(F1);
	fclose(F2);
	printf("Данные записаны в файл F2.txt\n");
}