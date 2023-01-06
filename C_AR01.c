#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void reverse(char* str);

int main()
{
    char str[1024] = {0};
    fgets(str, 1024, stdin);
    reverse(str);
    return 0;
}

void reverse(char* str)
{
    int count = 0, i;
    char restr[128][1024] = {0};
    char *ptr = str;
    while(*ptr != '\n')
        ptr++;
    *ptr = '\0';

    ptr = strtok(str, " ");
    while(ptr != NULL)
    {
        strcpy(restr[count++], ptr);
        ptr = strtok(NULL, " ");
    }
    for(i = count-1; i>0; i--)
        printf("%s ", restr[i]);
    printf("%s\n", restr[i]);
}