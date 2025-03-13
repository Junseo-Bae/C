#include <stdio.h>
#include <stdlib.h>

// do~while 문으로 1부터 입력받은 수까지 누적 합계 출력 293p

int main()
{

    int i = 1, j, sum = 0;

    scanf("%d", &j);

    do
    {
        sum = sum + i;
        i++;
    } while(i <= j);

    printf("%d", sum);

    return 0;
}
