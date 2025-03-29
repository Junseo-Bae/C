#include <stdio.h>
#include <time.h>

int main()
{
    char str1[30];
    char str2[30];

    scanf("%s", str1);
    scanf("%s", str2);

    int i, j;

    for(i = 0; i < 30; i++)
    {
        if(str1[i] == '\0')
        {
            break;
        }
    }
    
    for(j = 0; j < 30; j++)
    {
        if(str2[j] == '\0')
        {
            str1[i] = str2[j];
            i++;
        }
    }

    str2[i] = '\0';

    printf("%s", str1);

    return 0;
}
