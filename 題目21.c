//�g�@�ӵ{���ӧ�X��J���̭ӼƦr���̤j�ȩM�̤p�ȡA�ƭȤ����w����ơA�B�ȥi�s��� float ���A�ƭȤ��C
//��J�̭ӼƦr�A�H�ťն��j�C
//��X�ƦC�����̤j�ȻP�̤p�ȡA��X�ɻݪ��W�p���I����Ʀr�C

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