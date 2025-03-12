#include <stdio.h>
#include <stdlib.h>



int main()
{
    int i, k, sum = 0;

    scanf("%d", &k);

    for(i = 1; i <= k; i++)
    {
        sum = sum + i;
    }
    printf("%d", sum);

    return 0;
}

