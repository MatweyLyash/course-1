#include <iostream>

void main()
{
    double t, y, a = 1.5, j = -4 * a, c = 10, d = 0.5 * pow(10, -8);
    t = (d * c + a * sqrt(c - 1));
    y = 0.5 * t / d + exp(a);
    std::cout << "t=" << t;
    std::cout << "\ny=" << y;
}
