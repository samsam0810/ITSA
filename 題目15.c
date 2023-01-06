//��J�@�楿�`���^���r�A�]�N�O���n���}�Y�O�ťթάO���s���� �ťժ����εo�͡A�åB���e�u��]�t�^��r���B�ťաB�r�I�B�y�I�C �`�N : ��J���r����׳̦h�O 100 
//�Ĥ@���X�@�ӥ���� n �A��ܦ����r���r�ơC �ĤG��}�l�̧ǿ�X�b�����r�����X�{���r���ΥX�{�����ơC �`�N : �j�p�g�����A��X�p�g�r���C
#include <stdio.h>
#include <ctype.h>

void turn_space(char* str);
int count_word(char* str);
void count_letter(int* ascii, char* str);

int main()
{
    char str[1024] = {0};
    int ascii[128] = {0};
    fgets(str, 1024, stdin);//input
    turn_space(str);//if not alphabet turn into space
    printf("%d\n", count_word(str));//print how many words
    count_letter(ascii, str);//count letter by ascii table
    for(int i = 'a'; i <= 'z'; i++)
    {
        if(ascii[i] != 0)
            printf("%c : %d\n", i, ascii[i]);
    }
    return 0;
}

void turn_space(char* str)
{
    char* ptr = str;
    while(*ptr != '\0')
    {
        if(!isalpha(*ptr))//change into space
            *ptr = ' ';
        ptr++;
    }
}

int count_word(char* str)
{
    int count = 0;
    char* ptr = str;
    while(*ptr != '\0')
    {
        if(isalpha(*ptr))
        {
            count++;
            while(isalpha(*ptr))
            {
                ptr++;
            }
        }
        ptr++;
    }
    return count;
}

void count_letter(int* ascii, char* str)
{
    char* ptr = str;
    while(*ptr != '\0')
    {
        if(*ptr >= 'A' && *ptr <= 'Z')//if it is capital, then count of lower letter increase 1
        {
            ascii[*ptr+('a'-'A')]++;
        }
        else
            ascii[*ptr]++;
        ptr++;
    }
}