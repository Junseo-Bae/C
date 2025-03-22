#include <stdio.h>

void change(int* a, int* b)
{
    int c;
    c = *a;
    *a = *b;
    *b = c;
}

int main()
{
    int a, b;

    scanf("%d %d", &a, &b);
    printf("%d %d\n", a, b);

    change(&a, &b);
    printf("%d %d", a, b);

    return 0;
}
