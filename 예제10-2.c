#include <stdio.h>

// 배열과 for 문으로 총점고 평균 출력 430p

int main() {

    int arr[10];
    int i, sum = 0;
    int average;

    printf("10개의 숫자를 입력하세요..\n");

    for(i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }

    average = sum / 10;

    printf("총점 : %d\n", sum);
    printf("평균 : %d", average);

    return 0;
}
