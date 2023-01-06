#include <stdio.h>

int main()
{
    int n, ans = 1;
    scanf("%d", &n);
    if(n > 31)
    {
        printf("Value of more than 31\n");
        return 0;
    }
    for(int i = 0; i < n; i++)
    {
        ans = ans << 1;
    }
    printf("%d\n", ans);
}