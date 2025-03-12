#include <stdio.h>
#include <stdlib.h>



int main()
{
    int i, j, k;

    scanf("%d", &k);

    for(i = 1; i <= k; i++)
    {
        for(j = k - 1; j >= i; j--)
        {
            printf(" ");
        }

        for(j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }


    return 0;
}

