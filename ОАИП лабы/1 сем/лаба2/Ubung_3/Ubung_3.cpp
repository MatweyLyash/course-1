#include <iostream>

void main()
{
    double p, q, t = 6, y = -1.2, x = 0.4 * pow(10, -6);
    p = 2.6 * t + cos(y / (x*3  +y));
    q = sin(t) / cos(t);
    std::cout << "p=" << p;
    std::cout << "\nq=" << q;


}