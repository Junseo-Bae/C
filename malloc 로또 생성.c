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

    return 0;
}
