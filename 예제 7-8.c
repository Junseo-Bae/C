#include <stdio.h>
#include <stdlib.h>

// 중첩 for 문으로 *를 1개부터 5개까지 출력 282p

int main()
{

    int i, j;

    for(i = 1; i <= 5; i++) // 5번 반복
    {
        for(j = 1; j <= i; j++) // j ~ i 만큼 * 출력
        {
            printf("*");
        }
    printf("\n");
    }

    return 0;
}
