#include <stdio.h>

int main(void)
{
    int hap = 0;

    for(int i = 1; i <= 10; i++)
        hap = hap + i;
    
    printf("1부터 10까지의 합: %d", hap);
    
    return 0;
}