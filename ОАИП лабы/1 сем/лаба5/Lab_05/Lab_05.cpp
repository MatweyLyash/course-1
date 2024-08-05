#include <iostream>
void main()
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	double  v, w, b=-5.4, k, m=4, u=0.05*pow(10,-4);
	
	for (int n = 1; n <= 4; n++)
	{
		cout << "\nВвести k";
		cin >> k;
	v = u + b - 2 * sqrt(0.7 * k + m);
	w = 100 * exp(-0.2 * u) - log(8.1 * u);	
	cout << v;
	cout << w;
	}
}
