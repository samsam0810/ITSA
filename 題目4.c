#include <stdio.h>

int main()
{
    int start_time, start_min;
    int end_time, end_min;
    int time, min;
    int total_min;
    int count;

    scanf("%d%d", &start_time, &start_min);
    scanf("%d%d", &end_time, &end_min);

    time = end_time-start_time;
    min = end_min-start_min;
    total_min = time*60+min;
    count = total_min/30;
    if(count <= 4)
        printf("%d\n", count*30);
    else if(count >= 4 && count <= 8)
        printf("%d\n", 4*30+(count-4)*40);
    else
        printf("%d\n", 4*30+4*40+(count-8)*60);
    return 0;
}