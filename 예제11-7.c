#include <stdio.h>
#include <stdlib.h>

// 포인터와 배열 사용 510p

int main()
{
    int a[] = {100, 200, 300, 400, 500};
    int cnt;

    int i;

    for(i = 0; i < 5; i++)
    {
        printf("%d ", &a[i]);
    }

   return 0;
}
