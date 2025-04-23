#include <stdio.h>
#include <stdlib.h>

void print_star(int n)
{
    int i;

    if(n == 0)
    {
        return;
    }
    print_star(n - 1);
    for(i = 0; i < n; i++)
    {
        printf("*");
    }
    printf("\n");

}

int main() {

    int n;

    scanf("%d", &n);

    print_star(n);

    return 0;
}
