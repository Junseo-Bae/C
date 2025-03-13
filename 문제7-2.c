#include <stdio.h>
#include <stdlib.h>



int main()
{
    int i, k;

    scanf("%d", &k);

    for(i = k; i <= 100; i = i + k)
    {
        printf("%d ", i);
    }

    return 0;
}
