#include <stdio.h>

int main() {

    int arr[10];
    int i, n, ea = 0;

    printf("배열에 넣을 숫자를 입력하세요..\n");

    for(i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("찾을 숫자를 입력하세요..\n");
    scanf("%d", &n);

    for(i = 0; i < 10; i++)
    {
        if(arr[i] == n)
        {
            ea++;
        }
    }

    printf("정수 %d는 배열에 %d개 존재합니다.", n, ea);

    return 0;
}
