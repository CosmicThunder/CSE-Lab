#include <stdio.h>
#include "mylib.h"

int main()
{
    int n;
    printf("Enter the upper limit (n): ");
    scanf("%d", &n);

    printf("Prime numbers between 2 to %d are:\n", n);
    for (int i = 2; i <= n; i++)
    {
        if (isPrime(i))
        {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}