#include <stdio.h>

int main()
{
    int up, down, height;
    scanf("%d%d%d", &up, &down, &height);
    printf("Trapezoid area:%.1lf\n", (up+down)*height/2.);
}