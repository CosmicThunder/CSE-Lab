#include <stdio.h>

void swap1(int a, int b)
{
    int c;
    c = a;
    a = b;
    b = c;
}
void swap2(int *a, int *b)
{
    int c = *a;
    *a = *b;
    *b = c;
}
int main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a,&b);
    swap1(a,b);
    printf("a: %d, b: %d\n",a,b);
    swap2(&a,&b);
    printf("a: %d, b: %d",a,b);
    return 0;
}