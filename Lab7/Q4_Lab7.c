#include <stdio.h>

int power(int x, int n)
{
    if (n == 1)
       return x;
    return x * power(x, n-1);
}

int main()
{
    int x, n;
    
    printf("Enter any integer: ");
    scanf("%d", &x);
    printf("Enter power: ");
    scanf("%d", &n);
    
    printf("%d^%d = %d", x,n,power(x,n));

    return 0;
}