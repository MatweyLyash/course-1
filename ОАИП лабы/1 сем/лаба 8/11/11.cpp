#include <iostream>

double f(double x) {
	return pow(x,3)+3;
}
double fun(double x) {
	return pow(x,3)+3*x-1;
}
double diff(double x) {
	return 3+ 3 * pow(x, 2);
}
double diff2(double x) {
	return 6 * x;
}


int main()
{
	setlocale(LC_ALL, "Russian");
	using namespace std;
	double a = 3, b = 6, h, n = 200, x, s = 0;


	h = (b - a) / n;
	x = a;

	for (int i = 0; i < n; i++) {
		s = s + h * (f(x) + f(x + h)) / 2;
		x = x + h;
	}
	cout << "\nпо трапеции s=" << s << endl;






	double s1 = 0, s2 = 0, z;

	h = (b - a) / (2 * n);
	x = a + 2 * h;

	for (int i = 1; i < n; i++) {

		s1 = s1 + f(x);
		x += h;
		s2 = s2 + f(x);
		x += h;
	}

	z = h / 3 * (f(a) + 4 * f(a + h) + 4 * s1 + 2 * s2 + f(b));
	cout << "\n по пораболе z=" << z << endl;



	double x1, a1 = 0, b1 = 100, e = 0.000001;
	if (fun(a1) * diff2(a1) > 0)

		x1 = a;

	else
		x1 = b;

	do {
		x = x1;
		x1 = x - fun(x) / diff(x);
	} while
		(abs(x1 - x) > 0);

	cout << "\n по касательной x=" << x1 << endl;


	double a2 = 0, b2 = 0;
	cin >> a2;
	cin >> b2;

	float m = abs(b2 - a2) / 2;
	do {
		x = (a2 + b2) / 2;
		if (fun(x) * fun(a2) <= 0) {
			b2 = x;
		}

		else {
			a2 = x;
		}
		m /= 2;
	} while (m >= 2 * e);
	cout << "\nпо дихотомии " << x;

}





