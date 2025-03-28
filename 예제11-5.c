#include <stdio.h>
#include <stdlib.h>

// 포인터 선언 시 자료형 불일치 - 오류 발생 498p

int main()
{
    int a;
    double *p = NULL;

    p = &a;
    *p = 13.8;

    printf("%d\n", p);
    printf("%d\n", *p);

   return 0;
}
