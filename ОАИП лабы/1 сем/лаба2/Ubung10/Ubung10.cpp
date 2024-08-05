
#include <iostream>

void main()
{
	double y, s, m = 3, n = 3, z = 1.7, a = 4 * pow(10, -8);
	y = (z + log(z)) / (exp(-3) + sqrt(a));
	s = (1 + m * n) / log(1 + z);
	std::cout << "y=" << y;
	std::cout << "\ns=" << s;

}
