#include <stdio.h>

void foo(int *p, int *q)
{
    q=p;
    *p=100;
}
int main()
{
    int m=0,n=0;
    foo(&m,&n);
    printf("%d %d\n",m,n);
    return 0;
}