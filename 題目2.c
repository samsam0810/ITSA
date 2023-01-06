#include <stdio.h>

int main()
{
    int miles = 0;
    double kilometer = 0;

    scanf("%d", &miles);
    kilometer = 1.6*miles;
    printf("%.1lf\n", kilometer);
    return 0;
}