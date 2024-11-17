#include <stdio.h>

int main()
{
    int m=1;
    int n=++m + m++ + ++m + m++;
    printf ("m=%d, n=%d",m,n);
    return 0;
}