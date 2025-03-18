#include <stdio.h>

// for 문으로 배열 요소 출력 430p

int main() {

    int arr[5] = {1, 2, 3, 4, 5};
    int i;

    for(i = 0; i < 5; i++)
    {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
}
