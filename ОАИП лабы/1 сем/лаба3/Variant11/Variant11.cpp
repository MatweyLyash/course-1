#include<iostream>
#include <iomanip>
void main()
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	char probel; probel = ' ';
	char c;
	cout << "\nВариант 11";
	cout << "\nВведите символ ";
	cin >> c;
	cout << setw(35) << setfill(probel) << probel;
	cout << setw(5) << setfill(c) << c << endl;
	cout << setw(35) << setfill(probel) << probel;
	cout << setw(5) << setfill(c) << c << endl;
	cout << setw(35) << setfill(probel) << probel;
	cout << setw(5) << setfill(c) << c << endl;

	double a, d, s_1;
	cout << "\nВведите диагональ квадрата ";
	cin >> d;
	a = d / sqrt(2);
	s_1 = pow(a, 2);
	cout << "\nПлощадь квадрата равна " << s_1;
}

