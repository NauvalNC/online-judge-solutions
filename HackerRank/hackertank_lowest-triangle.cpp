#include <iostream>
#include <math.h>

int main() 
{
    long double a, b, h;

    std::cin >> b;
    std::cin >> a;

    h = (2 * a) / b;

    std::cout << (int)ceil(h) << std::endl;

    return 0;
}