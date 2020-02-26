#include<iostream>

int main()
{
    int n;
    std::cin >> n;
    
    int x = 2;
    int valid = 0;
    if (n >= 4) 
    {
        while(x < n) 
        {
           if (x % 2 == 0 && (n - x) % 2 == 0) 
           {
               valid = 1;
               break;
           }
           x += 2;
        }
    }
    
    if (valid) std::cout << "YES" << std::endl;
    else std::cout << "NO" << std::endl;
    return 0;
}