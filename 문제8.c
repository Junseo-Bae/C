#include <stdio.h>

int main() {

    int i;

    for(i = 1; i <= 100; i++)
    {
        if((i % 10 == 3 || i % 10 == 6 || i % 10 == 9) && (i / 10 == 3 || i / 10 == 6 || i / 10 == 9))
        {
            printf("짝짝 ");
        }
        else if(i % 10 == 3 || i % 10 == 6 || i % 10 == 9 || i / 10 == 3 || i / 10 == 6 || i / 10 == 9)
        {
            printf("짝 ");
        }
        else
        {
            printf("%d ", i);
        }
    }

    return 0;
}
