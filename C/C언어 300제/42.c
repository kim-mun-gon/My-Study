#include <stdio.h>

int length(char *pstr);

int main(void)
{
    int len = length("abcde");
    
    printf("길이 = %d", len);
}

int length(char *pstr)
{
    int len = 0;

    while (*pstr != '\0')
    {
        pstr++;
        len++;
    }
    
    return len;
}