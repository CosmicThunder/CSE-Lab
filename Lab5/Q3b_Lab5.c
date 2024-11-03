#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, *p, *q;
    i = 10;
    p = &j;
    q = p;
    *q = 5;
    printf("%d %d %d %d", i , j , *p, *q);
    return 0;
}