//輸入一行正常的英文文字，也就是不要有開頭是空白或是有連續兩個 空白的情形發生，並且內容只能包含英文字母、空白、逗點、句點。 注意 : 輸入的字串長度最多是 100 
//第一行輸出一個正整數 n ，表示此行文字的字數。 第二行開始依序輸出在此行文字中有出現的字母及出現的次數。 注意 : 大小寫不分，輸出小寫字母。
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