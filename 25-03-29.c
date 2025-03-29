#include <stdio.h>
#include <string.h>

int main()
{
    char n;
    int i;

    scanf("%c", &n);

    if( (n >= 'A' && n <= 'Z') || (n >= 'a' && n <= 'z') )
    {
        printf("알파벳 입니다.");
    }
    else
    {
        printf("알파벳이 아닙니다.");
    }

    return 0;
}
