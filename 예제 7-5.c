#include <stdio.h>
#include <stdlib.h>

// 입력한 수까지 5의 배수 누적 합계 출력 279p

int main()
{

    int i, j, sum = 0;

    scanf("%d", &j);

    for(i = 5; i <= j; i = i + 5)   // 5의 배수를 구해야 되기 때문에 초기값은 5, 범위는 입력한 수까지 이기 때문에 j와 작거나 같다, 5씩 증감하여 5의 배수 구함
    {
        sum = sum + i;
        printf("%d\n", sum);
    }

    return 0;
}
