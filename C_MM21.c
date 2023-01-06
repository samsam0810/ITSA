#include <stdio.h>

long int fac(int n);

int main()
{
    int n;
    scanf("%d", &n);
    printf("%ld\n", fac(n));
}

long int fac(int n)
{
    if(n == 1 || n == 0)
        return 1;
    return n*fac(n-1);
}