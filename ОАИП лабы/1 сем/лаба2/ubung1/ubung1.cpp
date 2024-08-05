#include <iostream>
int main()
{
	double n = 4, t, u, s, y = 0.956, a = 5 * pow(10, -6) ;
	t = 1 / sqrt(y) + 14*a;
	u = (t + 1) / (a + 2);
	s = log((2*n / 3) + exp(-n) / u);
	std::cout << "t =" <<t;
	std::cout << "\nu=" << u;
	std::cout << "\ns=" << s;
}