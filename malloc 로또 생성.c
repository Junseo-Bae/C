#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int money, games;
    int i, j;
    srand(time(NULL));

    scanf("%d", &money);

    games = money / 5000;

    int** lotto = (int**)malloc(sizeof(int*)*games);
    for (i = 0; i < games; i++)
    {
        lotto[i] = (int*)malloc(sizeof(int)*6);
    }

    for (i = 0; i < games; i++)
    {
        for (j = 0; j < 6; j++)
        {
            lotto[i][j] = rand() % 45 + 1;
            printf("%d ", lotto[i][j]);
        }
        printf("\n");
    }

    return 0;
}
