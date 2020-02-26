#include <iostream>
#include <string>

int main() 
{
    std::string str;
    std::cin >> str;

    if (str.find("0000000") != std::string::npos || str.find("1111111") != std::string::npos) 
    {
        std::cout << "YES" << std::endl;
    } else 
    {
        std::cout << "NO" << std::endl;
    }

    return 0;
}