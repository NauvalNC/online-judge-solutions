#include<iostream>
#include<math.h>

int main()
{
    long long int n, m, a, res;
    std::cin >> n;
    std::cin >> m;
    std::cin >> a;
    
    long long int x = n / a;
    while(x * a < n) x++;
    
    long long int y = m / a;
    while (y * a < m) y++;
    
    res = x * y;
    
    std::cout << res << std::endl;
    
    return 0;
}
