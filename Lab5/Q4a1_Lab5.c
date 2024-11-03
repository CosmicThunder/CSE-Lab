#include <stdio.h>
#include <math.h>

void isPrime(int n)
{
    int a = 0;
    int s = ceil(sqrt(n));
    for (int i = 2; i <= s; i++)
    {
        if (n%i == 0)
        a = a+1;
    }
    if (a == 0)
    printf("%d is a prime number\n", n);
    else
    printf("%d is not a prime number\n", n);
}
int main()
{
    int n;
    printf("Enter any number\n");
    scanf("%d", &n);
    isPrime(n);
    return 0;
}
