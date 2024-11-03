#include <stdio.h>

void foo(int x, int *y)
{
    x=10;
    *y=20;
    printf ("Foo function: x=%d\t y=%d\n",x,*y);
}
int main()
{
    int m, n;
    foo(m,&n);
    printf ("Main function: m=%d\t n=%d\n",m,n);
    return 0;
}