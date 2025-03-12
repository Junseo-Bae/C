#include <stdio.h>
#include <stdlib.h>



int main()
{
    int i, k;

    scanf("%d", &k);

    for(i = 1; i <= 100; i++)
    {
        if(i % k == 0)
        {
            printf("%d ", i);
        }
    }

    return 0;
}

