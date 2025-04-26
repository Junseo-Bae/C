#include <stdio.h>
#include <stdlib.h>

struct vector
{
    float x;
    float y;
};

void sum_vector(struct vector* a, struct vector* b, struct vector* c)
{
    c->x = a->x + b->x;
    c->y = a->y + b->y;
}

int main()
{
    struct vector a, b, c;

    scanf("%f %f", &a.x, &a.y);
    scanf("%f %f", &b.x, &b.y);

    sum_vector(&a, &b, &c);

    printf("%f %f", c.x, c.y);

    return 0;
}
