#include <iostream>

void main()
{
    double t, u, a = 8.1, k = 4, x = 2 * pow(10, -4);
    t = 2 * k / a + log(2 + x);
    u = sqrt(k - 1) / (t + 1);
    std::cout << "t=" << t;
    std::cout << "\nu=" << u;
}