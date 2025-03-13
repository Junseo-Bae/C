#include <stdio.h>
#include <stdlib.h>

// while 문으로 한 줄에 숫자 5개씩 출력 290p

int main()
{

    int i = 0, j;

    scanf("%d",&j);

    while(i < j)
    {
       i++;
       printf("%d ", i);
       if((i % 5) == 0)
       {
           printf("\n");
       }
    }

    return 0;
}
