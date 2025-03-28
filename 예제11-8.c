#include <stdio.h>
#include <stdlib.h>

// 포인터로 배열 요소 합계 출력 512p

int main()
{
    int a[] = {100, 200, 300, 400, 500};
    int *p;
    int sum = 0;

    p = a;

    int i;

    for(i = 0; i < 5; i++)
    {
        sum = sum + p[i];
    }

    printf("%d", sum);

   return 0;
}
