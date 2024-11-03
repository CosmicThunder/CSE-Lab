#include <stdio.h>

void swap(int *x, int *y)
{
    int *tmp;
    tmp = x;
    x = y;
    y = tmp;
}
int main()
{
    int m=10, n=20;
    printf("Before: m=%d\t n=%d\n",m,n);
    swap(&m,&n);
    printf("After: m=%d\t n=%d\n",m,n);
    return 0;
}