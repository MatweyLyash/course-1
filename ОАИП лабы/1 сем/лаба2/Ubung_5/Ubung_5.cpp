#include <iostream>

void main()
{
    double w, v, x = 1.1, b = 40, a = 5 * pow(10, -6);
    w = (a + b) * tan(x) / (x + 1);
    v = 1 / 2 * b - sqrt(w - a * b);
    std::cout << "w=" << w;
    std::cout << "\nv=" << v;

}
