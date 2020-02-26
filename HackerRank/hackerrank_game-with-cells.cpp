#include <iostream>

int main() 
{
    int n, m;
    std::cin >> n >> m;

    int hor, ver;
    hor = (n % 2 == 1) ? (n / 2) + 1 : n / 2;
    ver = (m % 2 == 1) ? (m / 2) + 1 : m / 2;

    std::cout << hor * ver << std::endl;

    return 0;
}