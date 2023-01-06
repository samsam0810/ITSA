#include <stdio.h>

int main()
{
    int arr[6] = {0};
    int sum = 0;
    for(int i = 0; i < 6; i++)
    {
        scanf("%d", &arr[i]);
        sum+=(arr[i]*arr[i]*arr[i]);
    }
    printf("%d\n", sum);
}