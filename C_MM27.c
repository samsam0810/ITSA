#include <stdio.h>

int main()
{
    int a, b, tmp;
    scanf("%d%d", &a, &b);
    if(a > b)
    {
        tmp = a;
        a = b;
        b = tmp;
    }
    int sum = 0;
    for(int i = a; i <= b; i++)
    {
        sum+=i;
    }
    printf("%d\n", sum);
}