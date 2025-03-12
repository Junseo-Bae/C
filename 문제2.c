#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main()
{
    srand(time(NULL));

    int a = rand() % 6 + 1;
    int b = rand() % 6 + 1;
    int c = rand() % 6 + 1;

    printf("%d %d %d\n", a, b, c);

    if(a == b && b == c)
    {
        printf("%d", 10000 + a * 1000);
    }
    else if(a == b)
    {
        printf("%d", 1000 + a * 100);
    }
    else if(b == c)
    {
        printf("%d", 1000 + b * 100);
    }
    else if(c == a)
    {
        printf("%d", 1000 + a * 100);
    }
    else
    {
        if(a > b && a > c)
        {
            printf("%d", a * 100);
        }
        else if(b > a && b > c)
        {
            printf("%d", b * 100);
        }
        else
        {
            printf("%d", c * 100);
        }
    }

    return 0;
}

