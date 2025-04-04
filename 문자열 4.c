#include <stdio.h>

int main()
{
    char str[30];
    char find;
    int i;

    scanf("%s", str);
    getchar();
    scanf("%c", &find);

    int length = strlen(str);

    for(i = 0; i < length; i++)
    {
        if(str[i] == find)
        {
            printf("%d", i);
            break;
        }
    }

    return 0;
}
