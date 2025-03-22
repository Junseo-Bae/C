#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int arr[5];

int sum()
{
    int sum = 0;
    int i;
    for(i = 0; i < 5; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}

void avg()
{
    int sum = 0;
    double avg;
    int i;

    for(i = 0; i < 5; i++)
    {
        sum = sum + arr[i];
    }
    avg = sum / 5;
    printf("배열의 평균 : %f\n", avg);
}

int main()
{
   srand(time(NULL));
   int i;

   printf("랜덤 수 5개 :");
   for(i = 0; i < 5; i++)
   {
       arr[i] = rand() % 10 + 1;
       printf("%d ", arr[i]);
   }
   printf("\n");

   printf("배열의 합 : %d\n", sum());
   avg();

   return 0;
}
