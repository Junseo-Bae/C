#include <stdio.h>
#include <stdlib.h>

void func(int n)
{
    printf("%d ", n);
    if(n < 100)
    {
        func(n+1);
    }
}

int main()
{
    func(1);

    return 0;
}
