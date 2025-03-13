#include <stdio.h>
#include <stdlib.h>

// for 문으로 1부터 10까지 홀수의 누적 합계 출력 278p

int main()
{

    int i, sum = 0;

    for(i = 1; i <= 10; i = i + 2)
    {
        sum = sum + i;
        printf("%d\n", sum);
    }

    return 0;
}
