#include <iostream>
#include <iomanip>

void main()
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	char probel; probel = ' ';

	//Задание 8

	char f;
	cout << "Вариант 8";
	cout << "\nВведите символ ";
	cin >> f;
	cout << setw(37) << setfill(probel) << probel;
	cout << setw(8) << setfill(f) << f << endl;
	cout << setw(36) << setfill(probel) << probel;
	cout << setw(10) << setfill(f) << f << endl;
	cout << setw(35) << setfill(probel) << probel;
	cout << setw(12) << setfill(f) << f << endl;
	cout << setw(35) << setfill(probel) << probel;
	cout << setw(12) << setfill(f) << f << endl;
	cout << setw(35) << setfill(probel) << probel;
	cout << setw(12) << setfill(f) << f << endl;
	cout << setw(35) << setfill(probel) << probel;
	cout << setw(12) << setfill(f) << f << endl;
	cout << setw(36) << setfill(probel) << probel;
	cout << setw(10) << setfill(f) << f << endl;
	cout << setw(37) << setfill(probel) << probel;
	cout << setw(8) << setfill(f) << f << endl;
	cout << setw(40) << setfill(probel) << probel;
	cout << setw(2) << setfill(f) << f << endl;
	cout << setw(37) << setfill(probel) << probel;
	cout << setw(8) << setfill(f) << f << endl;
	cout << setw(36) << setfill(probel) << probel;
	cout << setw(2) << setfill(f) << f;
	cout << setw(2) << setfill(probel) << probel;
	cout << setw(2) << setfill(f) << f;
	cout << setw(2) << setfill(probel) << probel;
	cout << setw(2) << setfill(f) << f << endl;
	cout << setw(36) << setfill(probel) << probel;
	cout << setw(2) << setfill(f) << f;
	cout << setw(2) << setfill(probel) << probel;
	cout << setw(2) << setfill(f) << f;
	cout << setw(2) << setfill(probel) << probel;
	cout << setw(2) << setfill(f) << f << endl;
	cout << setw(36) << setfill(probel) << probel;
	cout << setw(2) << setfill(f) << f;
	cout << setw(2) << setfill(probel) << probel;
	cout << setw(2) << setfill(f) << f;
	cout << setw(2) << setfill(probel) << probel;
	cout << setw(2) << setfill(f) << f << endl;
	cout << setw(36) << setfill(probel) << probel;
	cout << setw(2) << setfill(f) << f;
	cout << setw(2) << setfill(probel) << probel;
	cout << setw(2) << setfill(f) << f;
	cout << setw(2) << setfill(probel) << probel;
	cout << setw(2) << setfill(f) << f << endl;
	cout << setw(40) << setfill(probel) << probel;
	cout << setw(2) << setfill(f) << f << endl;
	cout << setw(40) << setfill(probel) << probel;
	cout << setw(2) << setfill(f) << f << endl;
	cout << setw(40) << setfill(probel) << probel;
	cout << setw(2) << setfill(f) << f << endl;
	cout << setw(39) << setfill(probel) << probel;
	cout << setw(4) << setfill(f) << f << endl;
	cout << setw(38) << setfill(probel) << probel;
	cout << setw(2) << setfill(f) << f;
	cout << setw(2) << setfill(probel) << probel;
	cout << setw(2) << setfill(f) << f << endl;
	cout << setw(38) << setfill(probel) << probel;
	cout << setw(2) << setfill(f) << f;
	cout << setw(2) << setfill(probel) << probel;
	cout << setw(2) << setfill(f) << f << endl;
	cout << setw(38) << setfill(probel) << probel;
	cout << setw(2) << setfill(f) << f;
	cout << setw(2) << setfill(probel) << probel;
	cout << setw(2) << setfill(f) << f << endl;
	cout << setw(38) << setfill(probel) << probel;
	cout << setw(2) << setfill(f) << f;
	cout << setw(2) << setfill(probel) << probel;
	cout << setw(2) << setfill(f) << f << endl;
	cout << setw(38) << setfill(probel) << probel;
	cout << setw(2) << setfill(f) << f;
	cout << setw(2) << setfill(probel) << probel;
	cout << setw(2) << setfill(f) << f << endl;

	double x, y, z, p, s;
	cout << "\nВведите сторону треугольника ";
	cin >> x;
	cout << "\nВведите сторону треугольника ";
	cin >> y;
	cout << "\nВведите сторону треугольника ";
	cin >> z;
	p = (x + y + z) / 2;
	s = sqrt(p * (p - x) * (p - y) * (p - z));
	cout << "\nПлощадь треугольника равна " << s;

}