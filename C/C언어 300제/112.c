#include <stdio.h>

void print_one(char *pone);
void print_one2(char one[]);

int main(void)
{
    char one[] = "Korea";

    print_one(one);
    print_one2(one);

    return 0;
}

void print_one(char *pone)
{
    puts(pone);
}

void print_one2(char one[])
{
    puts(one);
}