#include <stdio.h>
#include <stdlib.h>

// 정수 5개를 입력받아 선택 정렬을 사용해 오름차순으로 정렬하고 출력

int main()
{
    int arr[5];

    int i, j;
    int temp;

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < 5; i++)
    {
        for(j = i + 1; j < 5; j++)
        {
            if(arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for(i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
