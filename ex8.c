#include <stdio.h>
#include <time.h>

int main() {

    int arr[50];
    int brr[10] = {0};
    int i, j, temp, flag;
    srand(time(NULL));

    for(i = 0; i < 50; i++)
    {
        arr[i] = rand() % 10 + 1;
        printf("%d ", arr[i]);
    }
    printf("\n");

    for(i = 0; i < 50; i++)
    {
        for(j = 0; j < 50 - i; j++)
        {
            if(arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    for(i = 0; i < 50; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    for(i = 0; i < 50; i++)
    {
        flag = 0;
        for(j = 0; j < 10; j++)
        {
            if(brr[j] == 0)
            {
                break;
            }
            else if(brr[j] == arr[i])
            {
                flag = 1;
                break;
            }
        }
        if(flag == 0)
        {
            brr[j] = arr[i];
        }
    }
    for(i = 0; i < 10 && brr[i] != 0; i++)
    {
        printf("%d ", brr[i]);
    }
}
