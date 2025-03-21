#include <stdio.h>
#include <stdlib.h>

int add(int a, int b) 
{
    return a + b;
}

int subtract(int a, int b) 
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
    int x, y, result;
    char four;

    printf("두 정수와 연산자를 입력하세요 : ");
    scanf("%d %d %c", &x, &y, &four);

    if (four == '+') {
        result = add(x, y);
    }
    else if (four == '-')
    {
        result = subtract(x, y);
    }
    else if (four == '*')
    {
        result = multiply(x, y);
    }
    else if (four == '/')
    {
        result = divide(x, y);
    }
    else
    {
        printf("오류\n");
    }

    printf("결과: %d\n", result);

    return 0;
}
