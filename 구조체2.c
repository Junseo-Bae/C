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

struct vector sum(struct vector a, struct vector b)
{
    struct vector v;
    v.x = a.x + b.x;
    v.y = a.y + b.y;

    return v;
}

int main()
{
    struct vector a, b, c;

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

    c = sum(a, b);

    printf("%f %f", c.x, c.y);

    return 0;
}
