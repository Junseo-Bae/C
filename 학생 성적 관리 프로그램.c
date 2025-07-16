#include <stdio.h>

struct Student
{
    int no;
    char name[10];
    double grade;
};

void add_student()
{
    struct Student s;

    printf("학번 입력 : ");
    scanf("%d", &s.no);
    printf("이름 입력 : ");
    scanf("%s", s.name);
    printf("성적 입력 : ");
    scanf("%lf", &s.grade);

    FILE* file;
    file = fopen("student.bin", "ab");
    fwrite(&s, sizeof(struct Student), 1, file);
    fclose(file);
}

void print_student()
{
    long size;
    int count;

    FILE* file;
    file = fopen("student.bin", "rb");
    fseek(file, 0, SEEK_END);
    size = ftell(file);
    count = size / sizeof(struct Student);

    fseek(file, 0, SEEK_SET);

    struct Student* s = (struct Student*)malloc(sizeof(struct Student) * count);

    fread(s, sizeof(struct Student), count, file);
    fclose(file);

    int i, j;
    struct Student temp;
    for(i = 0; i < count-1; i++)
    {
        for(j = 0; j < count-i-1; j++)
        {
            if(s[j].grade < s[j+1].grade)
            {
                temp = s[j];
                s[j] = s[j+1];
                s[j+1] = temp;
            }
        }
    }

    for(i = 0; i < count; i++)
    {
        printf("학번 : %d, 이름 : %s, 성적 : %lf\n", s[i].no, s[i].name, s[i].grade);
    }

    free(s);
}

void re_grade()
{
    int re_no;
    double new_grade;

    FILE* file;
    file = fopen("student.bin", "rb+");

    printf("수정할 학생의 학번 입력 : ");
    scanf("%d", &re_no);

    struct Student s;
    
    while()
    {
        if(s.no == re_no)
        {
            printf("새 성적 입력 : ");
            scanf("%lf", &new_grade);
            s.grade = new_grade;
        }
    }
}

int main() {

    int n;

    while(1)
    {
        printf("1. 학생 추가\n");
        printf("2. 학생 데이터 출력\n");
        printf("3. 학생 성적 수정\n");
        printf("4. 프로그램 종료\n");
        printf("번호 입력 : ");
        scanf("%d", &n);

        if(n == 4)
        {
            break;
        }
        else if(n == 1)
        {
            add_student();
        }
        else if(n == 2)
        {
            print_student();
        }
        else if(n == 3)
        {
            re_grade();
        }
    }

}
