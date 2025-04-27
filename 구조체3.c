#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct std
{
    char name[5];
    int number;
    float avg;
    char grade;
};

int main()
{
    struct std s[10];
    srand(time(NULL));
    int i, j;
    struct std temp;
    char n;

    for(i = 0; i < 10; i++)
    {
        for(j = 0; j < 5; j++)
        {
            s[i].name[j] = rand() % 26 + 'a';
        }
        s[i].name[j] = "\0";

        s[i].number = 2025000 + (rand() & 100 + 1);

        s[i].avg = (rand() % 45 + 1) / 10.0;

        if(s[i].avg >= 4.0)
        {
            s[i].grade = 'A';
        }
        else if(s[i].avg >= 3.0)
        {
            s[i].grade = 'B';
        }
        else if(s[i].avg >= 2.0)
        {
            s[i].grade = 'C';
        }
        else
        {
            s[i].grade = 'F';
        }
    }

    for(i = 0; i < 10 - 1; i++)
    {
        for(j = i + 1; j < 10; j++)
        {
            if(s[i].avg < s[j].avg)
            {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }

    for(i = 0; i < 10; i++)
    {
        printf("%s %d %.2f %c\n", s[i].name, s[i].number, s[i].avg, s[i].grade);
    }

    return 0;
}
