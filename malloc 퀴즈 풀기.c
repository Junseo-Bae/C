#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m;
    int i;
    int correct = 0;
    char str[50];

    scanf("%d", &n);

    char** quiz = (char**)malloc(sizeof(char*)*n);
    char** answer = (char**)malloc(sizeof(char*)*n);

    scanf("%d", &m);

    for(i = 0; i < n; i++)
    {
        quiz[i] = (char*)malloc(sizeof(char)*(m+1));
        answer[i] = (char*)malloc(sizeof(char)*(m+1));
    }

    for(i = 0; i < n; i++)
    {
        scanf("%s", quiz[i]);
        getchar();
        scanf("%s", answer[i]);
        getchar();
    }

    while(correct < n)
    {
        printf("%d 번째 퀴즈 : ", correct + 1);
        printf("%s", quiz[correct]);
        scanf("%s", str);
        if(strcmp(answer[correct], str) == 0)
        {
            correct++;
        }
        else
        {
            printf("틀렸습니다.");
        }
    }
    printf("모든 퀴즈를 맞췄습니다.");

    for(i = 0; i < n; i++)
    {
        free(quiz[i]);
        free(answer[i]);
    }

    free(quiz);
    free(answer);

	return 0;
}
