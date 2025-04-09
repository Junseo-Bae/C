#include <stdio.h>

int main() {

    int i, n;
    int num = 1;

    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        num = num * i;
    }

    printf("%d", num);
}
