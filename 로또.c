#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int lotto[5][6];
    int win[6];
    int bonus;
    int i, j, k, n;
    int temp, num, flag;
    srand(time(NULL));
    int brr[6] = {0};
    int count = 0;
    int bonus_count = 0;

    while(1)
    {
        printf("게임 수 입력 (1~5): ");
        scanf("%d", &n);
        if(n >= 1 && n <= 5)
        {
            break;
        }
        printf("재입력\n");
    }

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < 6;)
        {
            num = rand() % 45 + 1;
            flag = 0;

            for(k = 0; k < j; k++)
            {
                if(brr[k] == num)
                {
                    flag = 1;
                    break;
                }
            }

            if(flag == 0)
            {
                brr[j] = num;
                j++;
            }
        }

        for(j = 0; j < 6; j++)
        {
            lotto[i][j] = brr[j];
        }
    }

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < 5; j++)
        {
            for(k = 0; k < 5 - j; k++)
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

    for(i = 0; i < 6;)
    {
        num = rand() % 45 + 1;
        flag = 0;

        for(j = 0; j < i; j++)
        {
            if(win[j] == num)
            {
                flag = 1;
                break;
            }
        }

        if(flag == 0)
        {
            win[i] = num;
            i++;
        }
    }

    for(i = 0; i < 5; i++)
    {
        for(j = 0; j < 5 - i; j++)
        {
            if(win[j] > win[j + 1])
            {
                temp = win[j];
                win[j] = win[j + 1];
                win[j + 1] = temp;
            }
        }
    }

    while(1)
    {
        bonus = rand() % 45 + 1;
        flag = 0;

        for(i = 0; i < 6; i++)
        {
            if(win[i] == bonus)
            {
                flag = 1;
                break;
            }
        }

        if(flag == 0)
            break;
    }

    printf("\n");
    printf("생성된 로또 번호: \n");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < 6; j++)
        {
            printf("%d ", lotto[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    printf("당첨 번호: ");
    for(i = 0; i < 6; i++)
    {
        printf("%d ", win[i]);
    }
    printf("\n");
    printf("보너스 번호: %d\n", bonus);

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < 6; j++)
        {
            for(k = 0; k < 6; k++)
            {
                if(lotto[i][j] == win[k])
                {

                }
            }
        }
    }

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < 6; j++)
        {
            for(k = 0; k < 6; k++)
            {
                if(lotto[i][j] == win[k])
                {
                    count++;
                }
            }
            if(lotto[i][j] == bonus)
            {
                bonus_count = 1;
            }
        }
    }

    printf("결과 : ");
    if(count == 6)
    {
        printf("1등\n");
    }
    else if(count == 5 && bonus_count == 1)
    {
        printf("2등\n");
    }
    else if(count == 5)
    {
        printf("3등\n");
    }
    else if(count == 4)
    {
        printf("4등\n");
    }
    else if(count == 3)
    {
        printf("5등\n");
    }
    else
    {
        printf("꽝");
    }

    return 0;
}
