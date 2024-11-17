#include <stdio.h>
#include "mylib.h"

int main()
{
    int n;
    printf("Enter the upper limit (n): ");
    scanf("%d", &n);

    printf("Armstrong numbers from 0 to %d are:\n", n);
    for (int i = 0; i <= n; i++)
    {
        if (isArmstrong(i))
        {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}
