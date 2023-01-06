#include <stdio.h>

int gcd(int a, int b);

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%d\n", gcd(a, b));
}

int gcd(int a, int b)
{
    if(a == 0)
        return b;
    if(b == 0)
        return a;
    if(a >= b)
        return gcd(b, a-b);
    else
        return gcd(a, b-a);
}