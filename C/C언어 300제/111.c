#include <stdio.h>
#include <string.h>

int main(void)
{
    char one[] = "Korea";
    char *pone;

    pone = one;

    puts(one);
    puts(one);

    strcpy(pone, "Japan");

    puts(one);
    puts(pone);

    return 0;
}