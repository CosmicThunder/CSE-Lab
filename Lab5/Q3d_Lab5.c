#include <stdio.h>

void foo(int *p)
{
    int x = 100;
    p = &x;
    *p = *p+10;
}
int main()
{
    int m = 10;
    int *p = &m;
    foo(p);
    printf("%d\n",m);
    return 0;
}