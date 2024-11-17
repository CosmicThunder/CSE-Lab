#include <stdio.h>
#include "mylib.h"

int main()
{
    int n;
    printf("Enter the upper limit (n): ");
    scanf("%d", &n);

    printf("Palindromic numbers from 0 to %d are:\n", n);
    for (int i = 10; i <= n; i++)
    {
        if (isPal(i))
        {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}
