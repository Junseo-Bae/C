#include <stdio.h>
#include <stdlib.h>

// 구구단 2 ~ 99단 중에서 선택한 단 출력 280p

int main()
{

    int i, j;

    scanf("%d", &j);

    for(i = 1; i <= 9; i++)
    {
        printf("%d * %d = %d\n", j, i, j * i);
    }

    return 0;
}
