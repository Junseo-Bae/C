#include <stdio.h>

int add_head(char* strArray[], char* data)
{
    int i;

    for(i = 99; i > 0; i--)
    {
        strArray[i] = strArray[i - 1];
    }
    strArray[0] = (char*)malloc(strlen(data) + 1);
    strcpy(strArray[0], data);

    return 1;
}

int add_tail(char* strArray[], char* data)
{
    int i;

    for(i = 0; i < 100; i++)
    {
        if(strArray[i] == NULL)
        {
            break;
        }
    }
    strArray[i] = (char*)malloc(strlen(data) + 1);
    strcpy(strArray[i], data);

    return 1;
}

int add_next(char* strArray[], char* target_data, char* data)
{
    int i;
    int count = -1;

    for(i = 0; i < 100; i++)
    {
        if(strcmp(strArray[i], target_data) == 0)
        {
            count = i;
            break;
        }
    }

    if(count == -1 || count == 99)
    {
        return 0;
    }

    for(i = 99; i > count + 1; i--)
    {
        strArray[i] = strArray[i - 1];
    }
    strArray[count + 1] = (char*)malloc(strlen(data) + 1);
    strcpy(strArray[count + 1], data);

    return 1;
}

int add_index(char* strArray[], int index, char* data)
{
    if(strArray[99] != NULL)
    {
        return 0;
    }

    int i;

    for(i = 99; i > index; i--)
    {
        strArray[i] = strArray[i - 1];
    }
    strArray[index] = (char*)malloc(strlen(data) + 1);
    strcpy(strArray[index], data);

    return 1;
}

void delete_all(char* strArray[])
{
    int i;

    for(i = 0; strArray[i] != NULL; i++)
    {
        free(strArray[i]);
    }
}

int main()
{
  char* strArray[100] = {NULL};
  int i;

  // 배열의 맨 앞에 hello 추가
  add_head(strArray, "hello");

  // 배열의 맨 뒤에 world 추가
  add_tail(strArray, "world");

  // 배열의 hello 뒤에 good 추가
  add_next(strArray, "hello", "good");

  // 배열의 2번째 인덱스에 bad 추가
  add_index(strArray, 2, "bad");

  // 전체 배열 출력
  for(i = 0; strArray[i] != NULL; i++)
  {
      printf("%s ", strArray[i]);
  }

  // 전체 배열 삭제
  delete_all(strArray);

    return 0;
}
