#include <stdio.h>

int main()
{
    char str[30];
    int i, index = 0;

    scanf("%s", str);

    for(i = 0; i < 30; i++)
    {
        if(str[i] == '\0')
        {
            break;
        }
        else
        {
            index++;
        }
    }
    printf("%d", index);

    return 0;
}
