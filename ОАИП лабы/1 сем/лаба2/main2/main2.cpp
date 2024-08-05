#include <iostream>
void main()
{
	double t, u, k = 4, a = 4.1, x = 5e-5;
	t = 2 * tan(k) / a * log(abs(3 + x)) + exp(x);
	u = sqrt(t + 1) * (sin(x) * cos(t));
	std::cout << "t=" << t;
	std::cout << "\nu=" << u;

}