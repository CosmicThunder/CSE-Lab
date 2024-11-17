#include <stdio.h>

int main()
{
    int n,i,j,a;
    printf("Enter number of columns\n");
    scanf("%d",&n);
    for (i=1; i<=n; i++)
    {
        a = 1;
        for (j=1; j <= 2*n-1; j++)
        {
            if (j >= n-(i-1) && j <= n+(i-1))
            {
                printf("   %d   ",a);
                if (j>=n)
                    a = a-1;
                else
                    a = a+1;
            }
            else
            {
                printf("       ");
            }
        }
        printf(" \n");
    }
    for (i=(n-1); i>=1; i--)
    {
        a = 1;
        for (j=1; j <= 2*n-1; j++)
        {
            if (j >= n-(i-1) && j <= n+(i-1))
            {
                printf("   %d   ",a);
                if (j>=n)
                    a = a-1;
                else
                    a = a+1;
            }
            else
            {
                printf("       ");
            }
        }
        printf(" \n");
    }
    return 0;
}