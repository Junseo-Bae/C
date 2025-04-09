#include <stdio.h>

int main() {

    int i, n;
    int num = 0;

    scanf("%d", &n);

    for(i = 2; i <= n - 1; i++)
    {
        if(n % i == 0)
        {
            printf("소수가 아닙니다.");
            num = 1;
            break;
        }
    }

    if(num == 0)
    {
        printf("소수 입니다.");
    }
}
