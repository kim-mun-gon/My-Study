#include <stdio.h>
#include <string.h>

#define TOKEN " "

int main(void)
{
    char string[100];
    char *pos;

    puts("문자열을 입력한 후 Enter키를 치세요");

    gets(string);

    pos = strpbrk(string, TOKEN);

    while(pos != NULL)
    {
        puts(pos++);
        pos = strpbrk(pos, TOKEN);
    }
    return 0;
}