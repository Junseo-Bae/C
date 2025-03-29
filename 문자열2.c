#include <stdio.h>
#include <time.h>

int main()
{
    char str1[30];
    char str2[30];

    scanf("%s", str1);

    int i;

    for(i = 0; i < 30; i++)
    {
        if(str1[i] == '\0')
        {
            break;
        }
        else
        {
            str2[i] = str1[i];
        }
    }

    str2[i] = '\0';

    printf("%s", str2);

    return 0;
}
