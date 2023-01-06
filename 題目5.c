#include <stdio.h>

void convert(int num);

int main()
{
    int num;
    scanf("%d", &num);
    convert(num);
    return 0;
}

void convert(int num)
{
    int binary[8] = {0};

    if(num >= 0)
    {
        for(int i = 0; i < 8; i++)
        {
            binary[i] = num%2;
            num/=2;
        }
        for(int i = 7; i >= 0; i--)
        {
            printf("%d", binary[i]);
        }
        printf("\n");
    }
    else
    {
        binary[7] = 1;
        num = ((-num)-1);
        for(int i = 0; i < 7; i++)
        {
            binary[i] = num%2;
            num/=2;
        }
        printf("%d", binary[7]);
        for(int i = 6; i >= 0; i--)
        {
            if(binary[i] == 0)
                printf("1");
            else
                printf("0");
        }
        printf("\n");
    }
}