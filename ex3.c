#include <stdio.h>
#include <time.h>

int main() {

    int a, b, i;
    int min = 0;
    int max = 0;

    scanf("%d", &a);
    scanf("%d", &b);

    if(a < b)
    {
        min = a;
    }
    else
    {
        min = b;
    }

    for(i = 1; i <= min; i++)
    {
        if( (a % i == 0) && (b % i == 0) )
        {
            max = i;
            printf("%d ", i);
        }
    }
    printf("\n");
    printf("%d", max);

}
