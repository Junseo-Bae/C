#include <stdio.h>

void printResult(int result[][3])
{
    int i, j;

    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int result[2][3];

    int mat1[2][3] = { {1,2,3}, {4,5,6} };
    int mat2[2][3] = { {1,2,3}, {4,5,6} };

    int mat3[3][3] = { {1,2,3}, {3,4,5}, {5,6,7} };

    int i, j, k;

    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 3; j++)
        {
            result[i][j] = mat1[i][j] * 4;
        }
    }
    printResult(result);
    printf("\n");

    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 3; j++)
        {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
    printResult(result);
    printf("\n");

    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 3; j++)
        {
            result[i][j] = mat1[i][j] - mat2[i][j];
        }
    }
    printResult(result);
    printf("\n");

    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 3; j++)
        {
            result[i][j] = 0;
            for(k = 0; k < 3; k++)
            {
                result[i][j] += mat1[i][k] * mat3[k][j];
            }
        }
    }
    printResult(result);

    return 0;
}
