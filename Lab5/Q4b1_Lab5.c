#include <stdio.h>

void isPal(int n)
{
    int a;
    int q = 0;
    int i = n;
    while (i > 0)
    {
        a = i%10;
        q = q*10 + a;
        i = i/10;
    }
    if (q == n)
    printf("%d is a palindrome", n);
    else
    printf("%d is not a palindrome", n);
}
int main()
{
    int n;
    printf("Enter any number\n");
    scanf("%d", &n);
    isPal(n);
    return 0;
}