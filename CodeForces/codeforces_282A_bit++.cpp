#include<iostream>
#include<string>

int main()
{
    int n, res;
    std::string m;
    
    std::cin >> n;
    
    res = 0;
    while(n--)
    {
       m = "";
       std::cin >> m;
    
       if (m[0] == '+' || m[2] == '+') 
       {
          res++;
       } else
       {
          res--;
       }
    }
    
    std::cout << res << std::endl;
    
    return 0;
}