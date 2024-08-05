#include <iostream>

int main()
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;

	double  a = -4.2, i = 4, t, d, f;
	for (int n = 1; n <= 4; n++)
	{
		cout << "\nВвести t ";
		cin >> t;
		d = i + 2 * t * (1 + sqrt(3 * pow(a, 2)));
		if (d >= t * (t + i))
			f = t * i;
		else(d < t* (t + i));
		f = exp(t - d) + 9;
		cout << d;
		cout << f;
	}
}


