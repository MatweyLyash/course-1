#include <iostream>
int main()
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	double v, w, b = -5.4, k = 3, m = 4, u = 0.05 * pow(10, -4);
	while (k < 4.1)
	{
		v = u + b - 2 * sqrt(0.7 * k + m);
		w = 100 * exp(-0.2 * u) - log(8.1 * u);
		cout <<v<<endl;
		cout << w<<endl;
		k = k + 0.2;
	}


}
