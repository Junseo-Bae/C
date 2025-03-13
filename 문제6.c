#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, k;

    scanf("%d", &k);

    for(j = 1; j <= k; j++)
    {
        for(i = 1; i <= k; i++)
        {
            if(j == 1 || j == k)
            {
                printf("*");
            }
            else if(i == 1 || i == k)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

}

}
