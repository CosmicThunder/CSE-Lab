#include <stdio.h>

int foo()
{
    static int m = 0;
    return m++;
}

int main()
{
    int n=100;
    for (foo(); foo() <= n; foo())
        printf("%d\t", foo());
}