#include <iostream>
#include <iomanip>

void main()
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	char probel; probel = ' ';
char n;
cout << "\nВариант 13";
cout << "\nВведите символ ";
cin >> n;
cout << setw(37) << setfill(probel) << probel;
cout << setw(3) << setfill(n) << n;
cout << setw(3) << setfill(probel) << probel;
cout << setw(3) << setfill(n) << n << endl;
cout << setw(36) << setfill(probel) << probel;
cout << setw(5) << setfill(n) << n;
cout << setw(1) << setfill(probel) << probel;
cout << setw(5) << setfill(n) << n << endl;
cout << setw(35) << setfill(probel) << probel;
cout << setw(13) << setfill(n) << n << endl;
cout << setw(35) << setfill(probel) << probel;
cout << setw(13) << setfill(n) << n << endl;
cout << setw(35) << setfill(probel) << probel;
cout << setw(13) << setfill(n) << n << endl;
cout << setw(36) << setfill(probel) << probel;
cout << setw(11) << setfill(n) << n << endl;
cout << setw(37) << setfill(probel) << probel;
cout << setw(9) << setfill(n) << n << endl;
cout << setw(38) << setfill(probel) << probel;
cout << setw(7) << setfill(n) << n << endl;
cout << setw(39) << setfill(probel) << probel;
cout << setw(5) << setfill(n) << n << endl;
cout << setw(40) << setfill(probel) << probel;
cout << setw(3) << setfill(n) << n << endl;
cout << setw(41) << setfill(probel) << probel;
cout << setw(1) << setfill(n) << n << endl;

double n_1;
cout << "\nКоличество косилок = ";
cin >> n_1;
double m, t;
cout << "\nКоличество часов работы первой косилки = ";
cin >> m;
t = (2 * m + (n_1 - 1) / 6) / 2 * n_1;
cout << "\nВремя работы = " << t;
}
