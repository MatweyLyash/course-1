#include <iostream>
#include <iomanip>
int main()
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	double  v, w, b =7, k, m = 4, u = 0.05 * pow(10, -4);
	while (b < 8.1)
	{
		b =  b+ 0.2;
		for (int n = 1; n <= 3; n++)
		{
			cout << "\nВвести m";
			cin >> m;
			cout << "\nВвести k";
			cin >> k;
			v = u + b - 2 * sqrt(0.7 * k + m);
			w = 100 * exp(-0.2 * u) - log(8.1 * u);
			cout << v;
			cout << w;
		}

	}
}