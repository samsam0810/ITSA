//題目10. 輾轉相除法
#include <stdio.h>

int gcd(int n, int m);

int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    printf("%d\n", gcd(n, m));
    return 0;
}

int gcd(int n, int m)
{
    if(n == 0)
        return m;
    if(m == 0)
        return n;
    if(n > m)
        return gcd(m, n%m);
    else 
        return gcd(n, m%n);
}