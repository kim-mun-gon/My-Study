#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int total = 0;
    char string[100];

    for(int count = 1; count <= 3; count++)
    {
        printf("%d번째 문자열을 입력한 후 Enter키를 누르세요.\n", count);
        gets(string);

        total += atoi(string);

        printf("입력 값 = %d, 총 합 = %d\n", atoi(string), total);
    }

    printf("읽은 문자열의 총 합은 %d입니다.\n", total);
    return 0;
}