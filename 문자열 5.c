#include <stdio.h>

int main()
{
    char str1[30];
    char str2[30];

    scanf("%s", str1);
    scanf("%s", str2);

    int i;
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    for(i = 0; i < len1; i++)
    {
        if(str1[i] != str2[i])
        {
            printf("모든 문자가 같지 않습니다.");
            return 0;
        }
    }

    printf("모든 문자가 같습니다.");

    return 0;
}
