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

void sum(float a.x, float a.y, float b.x, float b.y)
{
    
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
    
    
    
    return 0;
}
