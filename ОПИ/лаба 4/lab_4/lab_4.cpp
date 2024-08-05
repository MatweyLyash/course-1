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

}
