//�j��O���q�e��Ū�M�q�᭱Ū���ۦP���@�ӼƦr�Τ@�q��r�C�Ҧp�U�C�C�@����ƪ���Ƴ��O�j��G 123321 �A 55555 �A 45554 �A 11611 �C�м��g�@�ӵ{���A�P�_���O�_�j��C
//��J�@�ӥ���ơC
//�j��L�X �� �O �� �F�D�^��L�X �� �_ �� �C
#include <stdio.h>
#include <string.h>

char* my_itoa(int num, char* str);
int is_palindrome(char* str);

int main()
{
    int num;
    char str[1024] = {0};
    scanf("%d", &num);
    my_itoa(num, str);//turn integer to string
    if(is_palindrome(str))//determine whether palindrome
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}

char* my_itoa(int num, char* str)
{
    int index = 0; 
    while(num != 0)
    {
        str[index] = num%10+'0';
        num /= 10;
        index++;
    }
    return str;
}

int is_palindrome(char* str)
{
    for(int i = 0, j = strlen(str)-1; i <= j; i++, j--)
    {
        if(str[i] != str[j])
            return 0;
    }
    return 1;
}