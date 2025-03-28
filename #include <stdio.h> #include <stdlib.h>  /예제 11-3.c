#include <stdio.h>
#include <stdlib.h>

// 간접 참조 연산자로 데이터 변경 493p

int main()
{
    int a = 30;
    int *p = NULL;

    p = &a;

    printf("%d\n", *p);

    *p = 50;

    printf("%d\n", *p);

   return 0;
}
