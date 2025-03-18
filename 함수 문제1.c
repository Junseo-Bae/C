#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}

int substract(int a, int b)
{
    return a - b;
}

int multiply(int a, int b)
{
    return a * b;
}

int divide(int a, int b)
{
    return a / b;
}

int main() {

    int x, y;

    scanf("%d %d", &x, &y);

    printf("덧셈 : %d\n", add(x, y));
    printf("뺄셈 : %d\n", substract(x, y));
    printf("곱셈 : %d\n", multiply(x, y));
    printf("나눗셈 : %d\n", divide(x, y));

    return 0;
}
