#include <stdio.h>

int main()
{
    char n;

    scanf("%c", &n);

    if(n >= '0' && n <= '9')
    {
        printf("숫자 입니다.");
    }
    else
    {
        printf("숫자가 아닙니다.");
    }

    return 0;
}
