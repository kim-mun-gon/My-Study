#include <stdio.h>
#include <string.h>

char s1[20] = "1234567890";
char s2[20] = "1234567890";

int main(void)
{
    puts(s1);
    memcpy(s1+4, s1+2, 5);
    puts(s1);

    puts(s2);
    memmove(s2+4, s2+2, 5);
    puts(s2);

    return 0;
}