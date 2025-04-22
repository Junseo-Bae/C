#include <stdio.h>
#include <stdlib.h>

void func(int n)
{
    if(n < 100)
    {
        func(n+1);
    }
    printf("%d ", n);
}

int main()
{
    func(1);

    return 0;
}
