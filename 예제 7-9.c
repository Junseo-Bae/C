#include <stdio.h>
#include <stdlib.h>

// 중첩 for 문으로 *를 5개부터 1개까지 출력 283p

int main()
{

    int i, j;

    for(i = 1; i <= 5; i++)
    {
        for(j = i; j <= 5; j++)
        {
            printf("*");
        }
    printf("\n");
    }

    return 0;
}
