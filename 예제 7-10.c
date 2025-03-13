#include <stdio.h>
#include <stdlib.h>

// while 문으로 1부터 입력받은 수까지 누적 합계 출력 287p

int main()
{

    int i, j, sum = 0;

    scanf("%d", &j);

    while(i <= j)
    {
        sum = sum + i;
        i++;
    }
    printf("%d", sum);

    return 0;
}
