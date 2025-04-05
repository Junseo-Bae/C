#include <stdio.h>

int main()
{
    char str[30];
    int num;

    scanf("%s", str);

    if(str[0] == '-')
    {
        num = -1 * ( ( ( (str[1] - '0') * 10 + (str[2] - '0') ) * 10 + (str[3] - '0') ) * 10 + (str[4] - '0') );
    }
    else
    {
        num = ( ( (str[0] - '0') * 10 + (str[1] - '0') ) * 10 + (str[2] - '0') ) * 10 + (str[3] - '0');
    }

    printf("%d", num);

    return 0;
}
