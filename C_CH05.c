#include <stdio.h>

void sort(int* num);

int main()
{
    int num[3];
    scanf("%d%d%d", &num[0], &num[1], &num[2]);
    sort(num);
    printf("%d>%d>%d\n", num[0], num[1], num[2]);
}

void sort(int* num)
{
    int max_index, tmp;
    for(int i = 0; i < 3; i++)
    {
        max_index = i;
        for(int j = i+1; j < 3; j++)
        {
            if(num[j] > num[max_index])
                max_index = j;
        }
        tmp = num[max_index];
        num[max_index] = num[i];
        num[i] = tmp;
    }
}