#include <stdio.h>

int hapf(int value);

int main(void)
{
    printf("1부터 10까지의 합은 %d\n", hapf(10));
    printf("1부터 100까지의 합은 %d\n", hapf(100));
    printf("1부터 1000까지의 합은 %d\n", hapf(1000));

    return 0;
}

int hapf(int value)
{
    int hap = 0;

    for(int i = 0; i <= value; i++)
        hap = hap + i;
    
    return hap;
}