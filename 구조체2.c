#include <stdio.h>
#include <stdlib.h>

struct vector
{
    float x;
    float y;
};

int func(struct vector a, struct vector b)
{
    if(a.x == b.x && a.y == b.y)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void sum(struct vector a, struct vector b)
{
    float result_x = a.x + b.x;
    float result_y = a.y + b.y;

    printf("%f, %f", result_x, result_y);
}

int main()
{
    struct vector a, b;

    scanf("%f %f", &a.x, &a.y);
    scanf("%f %f", &b.x, &b.y);

    if(func(a, b) == 1)
    {
        printf("같습니다.\n");
    }
    else
    {
        printf("다릅니다.\n");
    }

    sum(a, b);

    return 0;
}
