#include <stdio.h>

int demand(int n, int s[], int d[]);
void sort(int n, int s[], int d[]);
void swap(int *x, int *y, int *a, int *b);

int main()
{
    int n;
    int s[32] = {0};
    int d[32] = {0};

    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d%d", &s[i], &d[i]);
    }
    //demand(n, s, d);
    printf("%d\n", demand(n, s, d));
    return 0;
}

int demand(int n, int s[], int d[])
{
    sort(n, s, d);
    int count = 0;
    int flag[32] = {0};
    for(int i = 0; i < n; i++)
    {
        if(flag[i] == 0)//還沒被派出去
        {
            if(count == 0)
            {
                flag[i] = 1;
                count++;
            }
            else
            {
                for(int j = 0; j < n; j++)
                {
                    if(flag[j] == 1 && d[j] <= s[i])
                    {
                        flag[j] = 2;
                        flag[i] = 1;
                        break;
                    }
                }
                if(flag[i] != 1)
                {
                    count++;
                    flag[i] = 1;
                }
            }
        }
    }
    /*for(int i = 0; i < n; i++)
    {
        printf("%d %d\n", s[i], d[i]);
    }*/
    return count;
}

void sort(int n, int s[], int d[])
{
    int min, minindex;
    for(int i = 0; i < n; i++)
    {
        minindex = i;
        for(int j = i+1; j < n; j++)
        {
            if(s[j] < s[minindex])
                minindex = j;
        }
        swap(&s[i], &s[minindex], &d[i], &d[minindex]);
    }
}

void swap(int *x, int *y, int *a, int *b)
{
    int tmp;

    tmp = *x;
    *x = *y;
    *y = tmp;

    tmp = *a;
    *a = *b;
    *b = tmp;
}