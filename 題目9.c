//試寫一個程式，輸入一正整數N，可計算出1到N之間可被3整除的數值之總和
#include <stdio.h>

int sum(int n);
int division(int i);

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d\n", sum(n));
    return 0;
}

int sum(int n)
{
    int total = 0;
    for(int i = 1; i <= n; i++)
    {
        if(division(i))
            total += i;
    }
    return total;
}

int division(int i)
{
    if(i%3 == 0)
        return 1;
    return 0;
}