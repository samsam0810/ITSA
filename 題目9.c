//�ռg�@�ӵ{���A��J�@�����N�A�i�p��X1��N�����i�Q3�㰣���ƭȤ��`�M
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