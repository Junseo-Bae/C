#include <stdio.h>
#include <stdlib.h>

// 포인터 배열 대입 후 증감 연산 507p

int main()
{
    int a[] = {100, 200, 300};
    int *p;

    p = a;  // 배열을 대입할 경우 &를 사용하지 않음

    printf("%d\n", p);
    printf("%d\n", *a);

    printf("%d\n", *++p);
    printf("%d\n", p);

   return 0;
}
