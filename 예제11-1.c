#include <stdio.h>
#include <stdlib.h>

// 주소 참조 연산자로 변수의 주소 출력 484p

int main()
{
   int num = 3;
   char word = 'A';
   float fnum = 21.5;

   printf("%d\n", &num);
   printf("%d\n", &word);
   printf("%d\n", &fnum);

   printf("%p\n", &num);
   printf("%p\n", &word);
   printf("%p\n", &fnum);

   return 0;
}
