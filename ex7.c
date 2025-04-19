#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void print_twoArr(int a[][100], int n, int m)
{
    int i, j;
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < m; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}

int main() {

    int twoArr[100][100];
    int n, m, a;
    int i, j, k;
    srand(time(NULL));

    scanf("%d %d", &n, &m);

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < m; j++)
        {
            twoArr[i][j] = rand() % 2;
        }
    }

    print_twoArr(twoArr, n, m);

    scanf("%d", &a);

    for(k = 0; k < a; k++)
    {
        if(twoArr[k/m][k%m] == 1)
        {
            twoArr[k/m][k%m] = 0;
        }
        else
        {
            for(i = k/m+1; i < n; i++)
            {
                if(twoArr[i][k%m] == 1)
                {
                    twoArr[i][k%m] = 0;
                    break;
                }
            }
        }
        print_twoArr(twoArr, n, m);
        printf("\n");
    }
}
