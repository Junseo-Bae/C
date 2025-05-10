#include <stdio.h>
#include <stdlib.h>

int std_length = 0;

struct student
{
    char number[10];
    char name[10];
    int score;
};

void add_student(struct student* std)
{
    scanf("%s %s %d", std[std_length].number, std[std_length].name, &std[std_length].score);
    std_length++;
}

void show_student(struct student* std, int n)
{
    char cmp_name[10];
    int i;
    
    scanf("%s", cmp_name);
    
    for(i = 0; i < n; i++)
    {
        if(strcmp(cmp_name, std[i].name) == 0)
        {
            printf("%s %s %d", std[i].number, std[i].name, std[i].score);
            break;
        }
    }
}

int main()
{
    int n, m = 0;
    int i;
    
    scanf("%d", &n);
    
    struct student* std = (struct student*)malloc(sizeof(struct student)*n);
    
    while(m != 4)
    {
        printf("1(학생 추가), 2(학생 정보 조회), 3(학생 정보 수정), 4(종료)");
        scanf("%d", &m);
        switch(m) 
        {
            case 1:
                add_student(std);
                break; 
            case 2:
                show_student(std, n);
                break;
            case 3:
                mod_student();
                break;
            case 4:
                break;
            default:
                printf("1~4를 입력하세요..\n");
                break;
        };
    }

	return 0;
}
