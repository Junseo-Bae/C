#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int lotto[5][6];
    int i, j, k, n;
    int num, flag, temp;
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

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < 6; j++)
        {
            num = rand() % 45 + 1;
            flag = 0;

            for(k = 0; k < j; k++)
            {
                if(lotto[i][k] == num)
                {
                    flag = 1;
                }
            }

            if(flag)
            {
                j--;
            }
            else
            {
                lotto[i][j] = num;
            }
        }
    }

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < 6 - 1; j++)
        {
            for(k = 0; k < 6 - 1 -j; k++)
            {
                if(lotto[i][k] > lotto[i][k+1])
                {
                    temp = lotto[i][k];
                    lotto[i][k] = lotto[i][k+1];
                    lotto[i][k+1] = temp;
                }
            }
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
