#include <stdio.h>
#include <stdlib.h>

// NULL 값으로 포인터 초기화 496p

int main()
{
    int a = 103;
    int *p = NULL;

    p = &a;

    printf("%p\n", p);
    printf("%p\n", *p);

    // printf("%p\n", &p);

   return 0;
}
