#include <stdio.h>

int check_inside(int R, int x, int y);

int main()
{
    int x, y;
    scanf("%d%d", &x, &y);
    if(check_inside(100, x, y))
        printf("inside\n");
    else
        printf("outside\n");
    return 0;
}

int check_inside(int R, int x, int y)
{
    if(x*x+y*y <= R*R)
        return 1;
    return 0;
}