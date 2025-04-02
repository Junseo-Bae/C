#include <stdio.h>

int len(char str[])
{
    int i, index = 0;

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
    return index;
}

int main()
{
    char str[30];
    char find;
    int i;

    scanf("%s", str);
    getchar();
    scanf("%c", &find);

    for(i = 0; i < len; i++)
    {
        if(str[i] == find)
        {
            printf("%d", i);
            break;
        }
    }


    return 0;
}
