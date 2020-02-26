#include<iostream>

int main()
{
    long long int x, step = 0;
    std::cin >> x;
    
    while(x > 0) 
    {
        for (int i = 5; i >= 1; i--) 
        {
           if (x >= i) 
           {
              x -= i;
              step++;
              break;
           }
        }
    }
    
    std::cout << step << std::endl;
    
    return 0;
}