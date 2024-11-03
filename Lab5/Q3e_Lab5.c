#include <stdio.h>

void foo(int **pp)
{
    printf("%d\n",**pp);
    int x = 100;
    *pp = &x;
    printf("%d\n",**pp);
}
int main()
{
    int m = 10;
    int *p = &m;
    foo(&p);
    return 0;
}