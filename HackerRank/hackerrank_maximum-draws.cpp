#include <iostream>

int main() 
{
    int cases, n;
    std::cin >> cases;

    while(cases--) 
    {
        std::cin >> n;
        std::cout << n + 1 << std::endl;
    }

    return 0;
}