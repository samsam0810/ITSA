#include <stdio.h>

void print(int a, int b, int x, int y);

int main()
{
    int num;
    int a, b, x, y;
    scanf("%d", &num);
    y = num%10;
    num/=10;
    x = num%10;
    num/=10;
    b = num%10;
    num/=10;
    a = num%10;
    print(a, b, x, y);
}

void print(int a, int b, int x, int y)
{
    for(int i = 0; i < 5; i++)
    {
        if(i == 0)
        {
            if(a == 0 || a == 2 || a == 3 || a == 5 || a== 7 || a == 8 || a == 9)
                printf("***** ");
            else if(a == 1)
                printf("    * ");
            else if(a == 6)
                printf("***** ");
            else if(a == 4)
                printf("*   * ");
            
            if(b == 0 || b == 2 || b == 3 || b == 5 || b== 7 || b == 8 || b == 9)
                printf("***** ");
            else if(b == 1)
                printf("    * ");
            else if(b == 6)
                printf("***** ");
            else if(b == 4)
                printf("*   * ");

            if(x == 0 || x == 2 || x == 3 || x == 5 || x== 7 || x == 8 || x == 9)
                printf("***** ");
            else if(x == 1)
                printf("    * ");
            else if(x == 6)
                printf("***** ");
            else if(x == 4)
                printf("*   * ");

            if(y == 0 || y == 2 || y == 3 || y == 5 || y== 7 || y == 8 || y == 9)
                printf("*****\n");
            else if(y == 1)
                printf("    *\n");
            else if(y == 6)
                printf("*****\n");
            else if(y == 4)
                printf("*   *\n");
        }
        else if(i == 1)
        {
            if(a == 0 || a == 4 || a == 8 || a == 9)
                printf("*   * ");
            else if(a == 1)
                printf("    * ");
            else if(a == 5 || a == 6)
                printf("*     ");
            else if(a == 2 || a == 3 || a == 7)
                printf("    * ");

            if(b == 0 || b == 4 || b == 8 || b == 9)
                printf("*   * ");
            else if(b == 1)
                printf("    * ");
            else if(b == 5 || b == 6)
                printf("*     ");
            else if(b == 2 || b == 3 || b == 7)
                printf("    * ");

            if(x == 0 || x == 4 || x == 8 || x == 9)
                printf("*   * ");
            else if(x == 1)
                printf("    * ");
            else if(x == 5 || x == 6)
                printf("*     ");
            else if(x == 2 || x == 3 || x == 7)
                printf("    * ");

            if(y == 0 || y == 4 || y == 8 || y == 9)
                printf("*   *\n");
            else if(y == 1)
                printf("    *\n");
            else if(y == 5 || y == 6)
                printf("*    \n");
            else if(y == 2 || y == 3 || y == 7)
                printf("    *\n");
        }
        else if(i == 2)
        {
            if(a == 0)
                printf("*   * ");
            else if(a == 1)
                printf("    * ");
            else if(a == 2 || a == 3 || a == 4 || a == 5 || a == 6 || a == 8 || a == 9)
                printf("***** ");
            else if(a == 7)
                printf("    * ");

            if(b == 0)
                printf("*   * ");
            else if(b == 1)
                printf("    * ");
            else if(b == 2 || b == 3 || b == 4 || b == 5 || b == 6 || b == 8 || b == 9)
                printf("***** ");
            else if(b == 7)
                printf("    * ");

            if(x == 0)
                printf("*   * ");
            else if(x == 1)
                printf("    * ");
            else if(x == 2 || x == 3 || x == 4 || x == 5 || x == 6 || x == 8 || x == 9)
                printf("***** ");
            else if(x == 7)
                printf("    * ");

            if(y == 0)
                printf("*   *\n");
            else if(y == 1)
                printf("    *\n");
            else if(y == 2 || y == 3 || y == 4 || y == 5 || y == 6 || y == 8 || y == 9)
                printf("*****\n");
            else if(y == 7)
                printf("    *\n");
        }
        else if(i == 3)
        {
            if(a == 0 || a == 6 || a == 8)
                printf("*   * ");
            else if(a == 1)
                printf("    * ");
            else if(a == 2)
                printf("*     ");
            else if(a == 3 || a == 4 || a == 5 || a == 7 || a == 9)
                printf("    * ");

            if(b == 0 || b == 6 || b == 8)
                printf("*   * ");
            else if(b == 1)
                printf("    * ");
            else if(b == 2)
                printf("*     ");
            else if(b == 3 || b == 4 || b == 5 || b == 7 || b == 9)
                printf("    * ");

            if(x == 0 || x == 6 || x == 8)
                printf("*   * ");
            else if(x == 1)
                printf("    * ");
            else if(x == 2)
                printf("*     ");
            else if(x == 3 || x == 4 || x == 5 || x == 7 || x == 9)
                printf("    * ");

            if(y == 0 || y == 6 || y == 8)
                printf("*   *\n");
            else if(y == 1)
                printf("    *\n");
            else if(y == 2)
                printf("*    \n");
            else if(y == 3 || y == 4 || y == 5 || y == 7 || y == 9)
                printf("    *\n");
        }
        else if(i == 4)
        {
            if(a == 0 || a == 2 || a == 3 || a == 5 || a == 6 || a == 8)
                printf("***** ");
            else if(a == 1)
                printf("    * ");
            else if(a == 4 || a == 7 || a == 9)
                printf("    * ");

            if(b == 0 || b == 2 || b == 3 || b == 5 || b == 6 || b == 8)
                printf("***** ");
            else if(b == 1)
                printf("    * ");
            else if(b == 4 || b == 7 || b == 9)
                printf("    * ");

            if(x == 0 || x == 2 || x == 3 || x == 5 || x == 6 || x == 8)
                printf("***** ");
            else if(x == 1)
                printf("    * ");
            else if(x == 4 || x == 7 || x == 9)
                printf("    * ");

            if(y == 0 || y == 2 || y == 3 || y == 5 || y == 6 || y == 8)
                printf("*****\n");
            else if(y == 1)
                printf("    *\n");
            else if(y == 4 || y == 7 || y == 9)
                printf("    *\n");
        }
    }
}