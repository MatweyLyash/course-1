#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define _CRT_SECURE_NO_WARNINGS
using namespace std;

//F1.txt, file.txt  result_file.txt
////10  вар
//int main(){
//	setlocale(LC_CTYPE, "rus");
//	FILE* F1;
//	int N = 0, y = 0, x, pd;
//	printf("Введите первое число последовательности: ");
//	cin >> x;
//	printf("Введите количество чисел в последовательности: ");
//	cin >> N;
//	printf("Введите второе число последовательности: ");
//	cin >> y;
//	fopen_s(&F1, "F1.txt", "w");
//
//	if (F1 == NULL) {
//		perror("Ошибка открытия файла\n");
//		return EXIT_FAILURE;
//	}
//	printf("Результат записанный в файл:\n");
//	printf("%d ", x);
//	fprintf(F1, "%d ", x);
//	for (int i = 1; i <= N; i++)
//	{
//
//		fprintf(F1, "%d ", y * i);
//		printf("%d ", y * i);
//	}
//	fclose(F1);
//	printf("\n");
//	fopen_s(&F1, "F1.txt", "r");
//	if (F1 == NULL) {
//		perror("Ошибка открытия файла\n");
//		return EXIT_FAILURE;
//	}
//	int* numbers;
//	numbers = new int[N];
//	int arf = 0, min = 100, buff = 0, varOne = 0, varTwo = 0;
//	printf("Из файла прочитанно:\n");
//	for (int i = 0; i <= N; i++)
//	{
//		fscanf_s(F1, "%d", &y);
//		printf("%d ", y);
//		numbers[i] = y;
//	}
//	printf("\n");
//	for (int i = 0; i <= N; i++)
//	{
//		if (i + 1 != N)
//		{
//			arf = (numbers[i] + numbers[i + 1]) / 2;
//			buff = arf - x;
//			if (min > buff) {
//				min = buff;
//				varOne = numbers[i];
//				varTwo = numbers[i + 1];
//			}
//		}
//
//
//	}
//	printf("x1 = %d\nx2 = %d", varOne, varTwo);
//	fclose(F1);
//}
//int main() {
//	setlocale(LC_CTYPE, "rus");
//	FILE* file, *result_file;
//	char str[256];
//	int N;
//	printf("Введите количество строк, которое хотите ввести: ");
//	cin >> N;
//	fopen_s(&result_file, "resultet.txt", "w");
//	fopen_s(&file, "file.txt", "w");
//	if (file == NULL) {
//		perror("Ошибка открытия файла\n");
//		return EXIT_FAILURE;
//	}
//	for (int i = 0; i <= N; i++)
//	{
//		cin.getline(str, 256);
//
//		fprintf(file, "%s \n", str);
//	}
//	printf("\nСтроки записаны\n");
//	fclose(file);
//	fopen_s(&file, "file.txt", "r+");
//	if (file == NULL) {
//		perror("Ошибка открытия файла\n");
//		return EXIT_FAILURE;
//	}
//	if (result_file == NULL) {
//		perror("Ошибка открытия файла\n");
//		return EXIT_FAILURE;
//	}
//
//	for (int i = 0; i <= N; i++)
//	{
//		fgets(str, 30, file);
//		bool flag = 1;
//		//printf("%s", str);
//		for (int j = 0; j < strlen(str); j++)
//		{
//			if (str[j] >= '0' && str[j] <= '9') {
//				flag = 0;
//			}
//		}
//		if (flag) {
//			
//			printf("%s", str);
//			fprintf(result_file, str);
//		}
//	}
//	fclose(file);
//	fclose(result_file);
//
//}

//вариант12
//dataex1.txt resultex1.txt, nameA_file,  nameB_file,  nameC_file,  nameD_file

//int main()
//{
//	setlocale(LC_ALL, "Rus");
//
//	FILE* data_file, * result_file;
//
//	fopen_s(&data_file, "dataex1.txt", "r");
//	fopen_s(&result_file, "resultex1.txt", "w");
//
//	if (data_file == NULL || result_file == NULL)
//	{
//		perror("Ошибка открытия файлов\n");
//		return EXIT_FAILURE;
//	}
//	else
//	{
//		printf("Файлы открыты\n");
//	}
//
//	fseek(data_file, 0, SEEK_END);
//	long fsize = ftell(data_file);
//	fseek(data_file, 0, SEEK_SET);
//
//	int number = 0;
//	int first_element;
//
//	if (!fscanf_s(data_file, "%d", &first_element))
//	{
//		perror("Ошибка!");
//		return EXIT_FAILURE;
//	}
//
//	printf("Введите номер строки ");
//	scanf_s("%d", &number);
//
//	if (number > first_element)
//	{
//		printf("Неверный номер строки\n");
//		return EXIT_FAILURE;
//	}
//	number++;
//
//	char ptr, str[50];
//	int counter = 0;
//
//	for (int i = 0; i < fsize; i++)
//	{
//		fread(&ptr, sizeof(char), 1, data_file);
//		if (ptr == '\n')
//		{
//			counter++;
//		}
//		if (counter == (number - 1))
//		{
//			fgets(str, 50, data_file);
//			fputs(str, result_file);
//			break;
//		}
//	}
//
//	printf("Результат записан в файл resultex1.txt\n");
//
//	fclose(data_file);
//	fclose(result_file);
//}
//
//int main()
//{
//	setlocale(LC_ALL, "rus");
//
//	FILE* nameA_file, * nameB_file, * nameC_file, * nameD_file;
//
//	fopen_s(&nameA_file, "nameA.txt", "r");
//	fopen_s(&nameB_file, "nameB.txt", "r");
//	fopen_s(&nameC_file, "nameC.txt", "r");
//	fopen_s(&nameD_file, "nameD.txt", "w");
//
//	if (nameA_file == NULL || nameB_file == NULL || nameC_file == NULL || nameD_file == NULL)
//	{
//		perror("Ошибка открытия файлов\n");
//		return EXIT_FAILURE;
//	}
//	else
//	{
//		printf("Файлы открыты\n");
//	}
//
//	fseek(nameA_file, 0, SEEK_END);
//	long fsize = ftell(nameA_file);
//	fseek(nameA_file, 0, SEEK_SET);
//
//	int numA, numB, numC;
//
//	while (!feof(nameA_file))
//	{
//		if (!fscanf_s(nameA_file, "%d", &numA))
//		{
//			perror("Ошибка!");
//			return EXIT_FAILURE;
//		}
//		if (!fscanf_s(nameB_file, "%d", &numB))
//		{
//			perror("Ошибка!");
//			return EXIT_FAILURE;
//		}
//		if (!fscanf_s(nameC_file, "%d", &numC))
//		{
//			perror("Ошибка!");
//			return EXIT_FAILURE;
//		}
//
//		if (numA < numB && numA < numC)
//		{
//			fprintf(nameD_file, "%d ", numA);
//		}
//		else if (numB < numA && numB < numC)
//		{
//			fprintf(nameD_file, "%d ", numB);
//		}
//		else if (numC < numA && numC < numB)
//		{
//			fprintf(nameD_file, "%d ", numC);
//		}
//		else
//		{
//			perror("Существует несколько минимальных элементов!");
//			return EXIT_FAILURE;
//		}
//	}
//
//	printf("Результат записан в файл nameD.txt\n");
//
//	fclose(nameA_file);
//	fclose(nameB_file);
//	fclose(nameC_file);
//	fclose(nameD_file);
//}



//вариант 2

// ,f.txt g.txt





int main()
{

    setlocale(LC_CTYPE, "Russian");

    int lines_count = 0;
    char file_name[255];
    FILE* file;
    printf("Имя первого файла: ");


    fgets(file_name, 255, stdin);
    *strchr(file_name, '\n') = 0;
    fopen_s(&file,file_name, "r");
    errno_t err;
    err = fopen_s(&file, file_name, "r");
    if (err != 0)
    {
        perror("ошибка открытия");
        return 0;
    }


    int n;
    fscanf_s(file, "%d", &n);
    err = fopen_s(&file, file_name, "r");
    if (err != 0)
    {
        perror("ошибка открытия");
        return 0;
    }

    while (!feof(file))
    {
        if (fgetc(file) == '\n') //считаем кол-во строк
            lines_count++;
    }
    lines_count++;

    fseek(file, 0L, SEEK_SET); // возвращаемся в начало файла
    fscanf_s(file, "%d", &n);
    lines_count--;

    int** A;
    A = new int* [lines_count];    //выделение динам.памяти
    for (int i = 0; i < lines_count; i++)
        A[i] = new int[n];


    for (int i = 0; i < lines_count; i++) {
        for (int j = 0; j < n; j++) {
            fscanf_s(file, "%d", &A[i][j]);
        }
    }

    for (int i = 0; i < lines_count; i++) {
        for (int j = 0; j < n; j++) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
    fclose(file);



    //второй файл (тоже самое) 

    int lines_count1 = 0;
    char file_name1[255];
    FILE* file1;
    printf("Имя второго файла: ");


    fgets(file_name1, 255, stdin);
    *strchr(file_name1, '\n') = 0;
    fopen_s(&file1,file_name1, "r");

    int n1;
    fscanf_s(file1, "%d", &n1);

    while (!feof(file1))
    {
        if (fgetc(file1) == '\n')
            lines_count1++;
    }
    lines_count1++;

    fseek(file1, 0L, SEEK_SET);
    fscanf_s(file1, "%d", &n1);
    lines_count1--;

    int** B;
    B = new int* [lines_count1];    //выделение динам.памяти
    for (int i = 0; i < lines_count1; i++)
        B[i] = new int[n1];


    for (int i = 0; i < lines_count1; i++) {
        for (int j = 0; j < n1; j++) {
            fscanf_s(file1, "%d", &B[i][j]);
        }
    }

    for (int i = 0; i < lines_count1; i++) {
        for (int j = 0; j < n1; j++) {
            cout << B[i][j] << " ";
        }
        cout << endl;
    }
    fclose(file1);

    //запись

    FILE* fp;
    fopen_s(&fp,"fC.txt", "w");

    fprintf(fp, "%d", n);
    fprintf(fp, "\n");

    for (int i = 0; i < lines_count; i++) {
        for (int j = 0; j < n; j++) {
            int c = A[i][j] + B[i][j];
            fprintf(fp, "%d", c);
            fprintf(fp, " ");
        }
        fprintf(fp, "\n");
    }

    fclose(fp);

    return 0;
}



//int main()
//{
//
//    FILE* file;
//    fopen_s(&file,"f.txt", "r");
//    int numbers[255];
//
//    for (int i = 0; !feof(file); i += 20) {
//        for (int j = 0; j < 11; j++) {
//            fscanf_s(file, "%d", &numbers[j]);
//        }
//        for (int j = 11; j < 21; j++) {
//            fscanf_s(file, "%d", &numbers[j]);
//        }
//
//        FILE* file1;
//        fopen_s(&file1,"g.txt", "w");
//
//        for (int k = 0; k < 5; k++) {
//
//            fprintf(file1, "%d", (numbers[k]));
//            fprintf(file1, " ");
//
//        }
//        for (int k = 0; k < 5; k++) {
//
//
//            fprintf(file1, "%d", (numbers[k + 10]));
//            fprintf(file1, " ");
//
//        }
//        for (int k = 0; k < 5; k++) {
//
//
//            fprintf(file1, "%d", (numbers[k + 5]));
//            fprintf(file1, " ");
//
//        }
//        for (int k = 0; k < 5; k++) {
//
//
//            fprintf(file1, "%d", (numbers[k + 15]));
//            fprintf(file1, " ");
//
//        }
//        fclose(file1);
//    }
//
//    fclose(file);
//
//
//
//    return 0;
//}
//
