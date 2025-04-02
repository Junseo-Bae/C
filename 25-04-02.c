#include <stdio.h>
#include <string.h>

int main()
{
    char p[3][6] = {"hello", "!", "world"};

    int i, j;

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 6; j++)
        {
            if(p[i][j] == '\0')
            {
                printf("%c ", 'N');
            }
            else
            {
                printf("%c ", p[i][j]);
            }
        }
    }

    return 0;
}
