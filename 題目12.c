#include <stdio.h>

int recursive(int n);

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d\n", recursive(n));
    return 0;
}

int recursive(int n)
{
    if(n == 0 || n == 1)
        return n+1;
    return (recursive(n-1) + recursive(n/2));
}