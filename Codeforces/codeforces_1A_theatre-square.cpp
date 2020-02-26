#include<iostream>
#include<math.h>

int main()
{
    int n, m, a, res;
    std::cin >> n;
    std::cin >> m;
    std::cin >> a;
    
    int x = n / a;
    while(x * a < n) x++;
    
    int y = m / a;
    while (y * a < m) y++;
    
    res = x * y;
    
    std::cout << res << std::endl;
    
    return 0;
}
