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
    char str1[30];
    char str2[30];

    scanf("%s", str1);
    scanf("%s", str2);

    int i, temp;
    int len1 = len(str1);
    int len2 = len(str2);

    if(len1 > len2)
    {
        temp = len1;
        len1 = len2;
        len2 = temp;
    }

    for(i = 0; i < temp; i++)
    {
        if(str1[i] != str2[i])
        {
            printf("모든 문자가 같지 않습니다.");
            break;
        }
        else
        {
            printf("모든 문자가 같습니다.");
        }
    }

    return 0;
}
