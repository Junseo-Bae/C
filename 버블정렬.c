#include <stdio.h>
#include <time.h>

void printArray(int a[])
{
    int i;

    for(i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}



int main()
{
    int arr[10];
    srand(time(NULL));

    int i, j;

    for(i = 0; i < 10; i++)
    {
        arr[i] = rand() % 100 + 1;
    }

    printArray(arr);

    int max;

    for(i = 0; i <= 10-2; i++)
    {
        for(j = 0; j <= 10-2-i; j++)
        {
            if(arr[j] > arr[j+1])
            {
                max = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = max;
            }
        }
        printArray(arr);
    }
    printArray(arr);
}
