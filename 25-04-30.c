#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;

    scanf("%d", &n);

    char* arr = (char*)malloc(n);

    scanf("%s", arr);
    printf("%s", arr);

    return 0;
}
