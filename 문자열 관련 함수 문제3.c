#include <stdio.h>

int main()
{
    char n;
    char a = 'a' - 'A';

    scanf("%c", &n);

    // printf("%d\n", 'a' - 'A');  32
    // printf("%d\n", 'b' - 'B');  32

    if(n >= 'a' && n <= 'z')
    {
        printf("%c", n - a);
    }

    if(n >= 'A' && n <= 'Z')
    {
        printf("%c", n + a);
    }

    return 0;
}
