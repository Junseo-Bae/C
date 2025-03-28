#include <stdio.h>
#include <stdlib.h>

// 포인터 선언 및 초기화 489p

int main()
{
   int a = 8;
   int *p = NULL;

   p = &a;

   printf("%d\n", p);
   printf("%d\n", *p);

   printf("%d\n", a);
   printf("%d\n", &a);

   return 0;
}
