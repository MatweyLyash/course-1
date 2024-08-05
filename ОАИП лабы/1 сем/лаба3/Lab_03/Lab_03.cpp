//Вариант 6(основа)
# include <iostream>
#include <iomanip> 

void main()
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	char c, probel; probel = ' ';
	cout << "Введите символ "; cin >> c;
	cout << setw(40) << setfill(probel) << probel;
	cout << setw(1) << setfill(c) << c << endl;
	cout << setw(39) << setfill(probel) << probel;
	cout << setw(4) << setfill(c) << probel<< endl;
	cout << setw(39) << setfill(probel) << probel;
	cout << setw(4) << setfill(c) << probel << endl;
	cout << setw(38) << setfill(probel) << probel;
	cout << setw(6) << setfill(c) << probel<< endl;
	cout << setw(35) << setfill(probel) << probel;
	cout << setw(12) << setfill(c) << probel<< endl;
	cout << setw(25) << setfill(probel) << probel;
	cout << setw(32) << setfill(c) << probel<<endl;
	cout << setw(28) << setfill(probel) << probel;
	cout << setw(26) << setfill(c) << probel<< endl;
	cout << setw(33) << setfill(probel) << probel;
	cout << setw(16) << setfill(c) << probel<< endl;
	cout << setw(32) << setfill(probel) << probel;
	cout << setw(18) << setfill(c) << probel<< endl;
	cout << setw(31) << setfill(probel) << probel;
	cout << setw(8) << setfill(c) << probel;
	cout << setw(4) << setfill(probel) << probel;
	cout << setw(8) << setfill(c) << probel<<endl;
	cout << setw(30) << setfill(probel) << probel;
	cout << setw(6) << setfill(c) << probel;
	cout << setw(10) << setfill(probel) << probel;
	cout << setw(6) << setfill(c) << probel<<endl;
	cout << setw(30) << setfill(probel) << probel;
	cout << setw(4) << setfill(c) << probel;
	cout << setw(14) << setfill(probel) << probel;
	cout << setw(4) << setfill(c) << probel<< endl;
	cout << setw(30) << setfill(probel) << probel;
	cout << setw(2) << setfill(c) << probel;
	cout << setw(18) << setfill(probel) << probel;
	cout << setw(2) << setfill(c) << probel;

	double X1, Y1, X2, Y2, l;
	cout << "\nВведите значения координат X1, Y1, X2, Y2\n";
	cin >> X1;
	cin >> Y1;
	cin >> X2;
	cin >> Y2;
	l = sqrt(pow(X1 - X2, 2) + pow(Y1 - Y2, 2));
	cout << "\nРасстояние между точками одной плоскасти равно " << l;


	
}


