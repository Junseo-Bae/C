#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int lotto[5][6];
    int i, j, n;
    srand(time(NULL));

    while(1)
    {
        scanf("%d", &n);

        if(n >= 1 && n <= 5)
        {
            break;
        }
        printf("재입력\n");
    }

    for(int i = 0; i < n; i++)
    {
        for(j = 0; j < 6; j++)
        {
            lotto[i][j] = rand() % 45 + 1;
        }
    }

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < 6; j++)
        {
            printf("%d ", lotto[i][j]);
        }
        printf("\n");
    }

    return 0;
}
