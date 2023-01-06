//糶祘Αㄓт块⑻计程㎝程计ぃ﹚俱计 float 篈计ず
//块⑻计フ丁筳
//块计い程籔程块惠计翴ㄢ计

#include <stdio.h>

double max(double* num);
double min(double* num);

int main()
{
    double num[10] = {0};
    for(int i = 0; i < 10; i++)
    {
        scanf("%lf", &num[i]);
    }
    printf("maximum:%.2lf\n", max(num));
    printf("minimum:%.2lf\n", min(num));
    return 0;
}

double max(double* num)//find max number
{
    double max_num = num[0];
    for(int i = 0; i < 10; i++)//find the largest number in array
    {
        if(max_num < num[i])
            max_num = num[i];
    }
    return max_num;
}

double min(double* num)//find min number
{
    double min_num = num[0];
    for(int i = 0; i < 10; i++)
    {
        if(min_num > num[i])
            min_num = num[i];
    }
    return min_num;
}