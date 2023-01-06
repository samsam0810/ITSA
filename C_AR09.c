#include <stdio.h>

void myatoi(char* str, int* num, int* num_count);
int perm(int* num, int num_count, int* num_perm, int start, int* perm_count);
void swap(int* x, int* y);
int find_max(int* num_perm, int perm_count);
int find_min(int* num_perm, int perm_count);

int main()
{
    int num[10000] = {0};
    int num_count = 0;
    int num_perm[10000] = {0};
    int perm_count = 0;
    char str[10000] = {0};
    fgets(str, 1024, stdin);
    //printf("%s", str);
    myatoi(str, num, &num_count);
    perm(num, num_count, num_perm, 0, &perm_count);
    printf("%d\n", find_max(num_perm, perm_count)-find_min(num_perm, perm_count));
    return 0;
}

void myatoi(char* str, int* num, int* num_count)
{
    char *ptr = str;
    while(*ptr != '\0')
    {
        if((*ptr-'0') >= 0 && (*ptr-'0') <= 9)
        {
            num[*num_count] = (*ptr-'0');
            (*num_count)++;
        }
        ptr++;
    }
    /*for(int i = 0; i < *num_count; i++)
    {
        printf("%d\n", num[i]);
    }*/
}

int perm(int* num, int num_count, int* num_perm, int start, int* perm_count)
{
    if(start == num_count)
    {
        for(int i = 0; i < num_count; i++)
        {
            num_perm[*perm_count] = (num_perm[*perm_count]*10) + (num[i]);
        }
        (*perm_count)++;
    }
    else
    {
        for(int i = start; i < num_count; i++)
        {
            swap(num+i, num+start);
            perm(num, num_count, num_perm, start+1, perm_count);
            swap(num+i, num+start);
        }
    }
}

void swap(int* x, int* y)
{
    int tmp = *x;
        *x = *y;
        *y = tmp;
}

int find_max(int* num_perm, int perm_count)
{
    int max = num_perm[0];
    
    for(int i = 1; i < perm_count; i++)
    {
        if(max < num_perm[i])
            max = num_perm[i];
    }
    return max;
}

int find_min(int* num_perm, int perm_count)
{
    int min = num_perm[0];

    for(int i = 1; i < perm_count; i++)
    {
        if(min > num_perm[i])
            min = num_perm[i];
    }
    return min;
}