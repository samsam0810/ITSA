#include <stdio.h>

void print_season(int month);

int main()
{
    int month;
    scanf("%d", &month);
    print_season(month);
    return 0;
}

void print_season(int month)
{
    if(month >= 3 && month <= 5)
        printf("Spring\n");
    else if(month >= 6 && month <= 8)
        printf("Summer\n");
    else if(month >= 9 && month <= 11)
        printf("Autumn\n");
    else 
        printf("Winter\n");
}