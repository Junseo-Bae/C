#include <stdio.h>

int main() {

    int arr[10];
    int i, index = 0;

    printf("배열에 넣을 숫자를 입력하세요..\n");

    for(i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    for(i = 0; i < 10; i++)
    {
        if(arr[i] > arr[0])
        {
            
        }
    }
    
    printf("가장 큰 수는 %d이고 인덱스는 %d입니다.");

    return 0;
}
