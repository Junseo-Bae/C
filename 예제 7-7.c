#include <stdio.h>
#include <stdlib.h>

// 중첩 for 문으로 구구단 2 ~ 9단까지 출력 281p

int main()
{

    int i, j;

    for(i = 2; i <= 9; i++) // 2 ~ 9단까지 출력
    {
        for(j = 1; j <= 9; j++) //곱하는 수
            printf("%d * %d = %d\n", i, j, i * j);
            printf("\n");
    }

    return 0;
}
