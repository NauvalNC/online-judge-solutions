#include <iostream>

int main()
{
    int cases;
    std::cin >> cases;
    
    long long int n, res;
    
    while (cases--) 
    {
       std::cin >> n;
    
       res = (n * (n - 1)) / 2;
    
       std::cout << res << std::endl;
    }
    
    return 0;
}