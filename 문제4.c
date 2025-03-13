#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j;

    while(1)
    {
        scanf("%d", &j);

        if(j > 1 && j < 10)
        {
            for(i = 1; i <= 9; i++)
            {
                printf("%d * %d = %d", j, i, j *i);
                printf("\n");
            }
            break;
        }
    }

    return 0;

}
