#include <stdio.h>

int main() {

    char age[9];
    int i, flag, year, sal, num = 0;

    do
    {
        flag = 0;
        scanf("%s", age);
        for(i = 0; i < 6; i++)
        {
            if(age[i] < '0' && age[i] > '9')
            {
                flag = 1;
                continue;
            }
        }
        if(age[6] != '-')
        {
            flag = 1;
            continue;
        }
        if(age[7] < '1' && age[7] > '4')
        {
            flag = 1;
        }
    } while(flag == 1);

    if(age[7] == '1' || age[7] == '3')
    {
        printf("남성\n");
    }
    else
    {
        printf("여성\n");
    }

    for(i = 0; i < 2; i++)
    {
        num = num * 10 + (age[i] - '0');
    }

    if(age[7] == '1' || age[7] == '2')
    {
        year = 1900 + num;
    }
    else
    {
        year = 2000 + num;
    }

    sal = 2025 - year + 1;

    printf("나이는 %d세", sal);
}
