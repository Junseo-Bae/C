#include <stdio.h>

int main()
{
    int num;
    char str[30];
    int i = 0, j;
    int minus = 0;

    scanf("%d", &num);

    if(num < 0)
    {
        minus = 1;
        num = -num;
    }
  
    while(num > 0)
    {
        str[i] = (num % 10) + '0';
        num = num / 10;
        i++;
    }

    if(minus)
    {
        str[i++] = '-';
    }

    str[i] = '\0';

    for(j = 0; j < i / 2; j++)
    {
        char temp = str[j];
        str[j] = str[i - 1 - j];
        str[i - 1 - j] = temp;
    }

    printf("%s", str);

    return 0;
}
