//癹ゅ琌眖玡弄㎝眖弄常计┪琿ゅㄒ–き计俱计常琌癹ゅ 123321  55555  45554  11611 叫级糶祘Α耞ウ琌癹ゅ
//块タ俱计
//癹ゅ 〃 琌 〃 獶ゅ 〃  〃 
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