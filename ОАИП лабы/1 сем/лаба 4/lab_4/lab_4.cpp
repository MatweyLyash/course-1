#include <iostream>
void main()
{
	setlocale(LC_CTYPE, "rus");
	using namespace std;

	int n;
	float x, y, z;
	cout << "Введите трёхзначное число ";
	cin >> n;
	x = (n % 10);
	y = (n % 100) / 10;
	z = (n / 100);
	if (
		(x == 0 || x == 9) ||
		(y == 0 || y == 9) ||
		(z == 0 || z == 9)
		)
		cout << "\nВерно";
	else
		cout << "\nНе верно";
	//варіант 5

	printf("\nВариант 5");
	float r_4, p_1, q_1, r_3;
	printf("\nВведите радиус шара");
	printf("\nr = ");
	scanf_s("%f", &r_4);
	printf("Введите диагонали ромба");
	printf("\np = ");
	scanf_s("%f", &p_1);
	printf("q = ");
	scanf_s("%f", &q_1);
	r_3 = (p_1 * q_1) / (sqrt(pow(p_1, 2) + pow(q_1, 2)) * 2);
	if (
		(r_4 <= r_3)
		)
		printf("Может");
	else
		printf("Не может");
	//варіант 4
	float a1, b1, p1, q1, r1, s3;
	printf("\nВведите параметры участка застройки:");
	printf("\nШирина = "); scanf_s("%f", &a1);
	printf("\nДлина = "); scanf_s("%f", &b1);
	printf("\nВведите параметры первого дома: ");
	printf("\nШирина = "); scanf_s("%f", &p1);
	printf("\nДлина = "); scanf_s("%f", &q1);
	printf("\nВведите параметры второго дома: ");
	printf("\nШирина = "); scanf_s("%f", &r1);
	printf("\nДлина "); scanf_s("%f", &s3);
	if (
		(a1 * b1) >= (p1 * q1) + (r1 * s3) &&
		(a1 >= p1 && a1 >= r1) &&
		(b1 >= q1 && b1 >= s3)
		)
		printf("Можно разместить");
	else
		printf("Нельзя разместить");

	//варіант 6
	float a, b, c_2, r_2, s, t;
	printf("\nВведите размеры коробки");
	printf("\na = ");
	scanf_s("%f", &a);
	printf("b = ");
	scanf_s("%f", &b);
	printf("c = ");
	scanf_s("%f", &c_2);
	printf("Введите размеры посылки");
	printf("\nr = ");
	scanf_s("%f", &r_2);
	printf("s = ");
	scanf_s("%f", &s);
	printf("t = ");
	scanf_s("%f", &t);
	if (
		(a <= r_2 && b <= s && c_2 <= t)
		)
		printf("\nМожно упаковать");
	else
		printf("\nНельзя упаковать");



}
