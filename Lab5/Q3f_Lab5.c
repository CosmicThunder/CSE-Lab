#include <stdio.h>

int foo(int x, int *p, int **pp)
{
    int y,z;
    **pp = **pp+10;
    y = **pp;
    *p = *p+20;
    z = *p;
    x = x+30;
    return x+y+z;
}
int main()
{
    int m=1, *sp, **dp;
    sp = &m;
    dp = &sp;
    printf("%d", foo(m,sp,dp));
    return 0;
}