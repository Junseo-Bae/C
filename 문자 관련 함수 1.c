#include <stdio.h>

int main()
{
    char str[30];
    int num = 0;
    int i = 0;

    scanf("%s", str);

    if(str[0] == '-')
    {
        for(i = 1; str[i] != '\0'; i++)
        {
            num = num * 10 + (str[i] - '0');
        }
        num *= -1;
    }
    else
    {
        for(i = 0; str[i] != '\0'; i++)
        {
            num = num * 10 + (str[i] - '0');
        }
    }

    printf("%d", num);

    return 0;
}
