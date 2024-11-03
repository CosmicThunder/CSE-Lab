#include <stdio.h>

int foo(int x, int *p, int **pp)
{
    int y,z;
    x = x+10;
    *p = *p/2;
    y = *p;
    **pp = **pp * 5;
    z = **pp;
    return x+y+z;
}
int main()
{
    int m=10, *sp, **dp;
    sp = &m;
    dp = &sp;
    printf("%d", foo(m,sp,dp));
    return 0;
}