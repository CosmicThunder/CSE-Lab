#include <stdio.h>

int main()
{
    int n,i,j,r,ncr;
    printf("Enter the number of columns: ");
    scanf("%d",&n);
    for (i=0; i<n; i++)
    {
        for (j=1; j<(n-i); j++)
        {
            printf("  ");
        }
        for (r=0; r<=i; r++)
        {
            if(i==0 || r==0)
            {
                ncr = 1;
                printf("%d   ",ncr);
            }
            else
            {
                ncr = (ncr*(i-r+1))/r;
                printf("%d   ",ncr);
            }
        }
        printf("\n");
    }
    for (i=n-2; i>=0; i--)
    {
        for (j=1; j<=(n-i)-1; j++)
        {
            printf("  ");
        }
        for (r=0; r<=i; r++)
        {
            if(i==0 || r==0)
            {
                ncr = 1;
                printf("%d   ",ncr);
            }
            else
            {
                ncr = (ncr*(i-r+1))/r;
                printf("%d   ",ncr);
            }
        }
        printf("\n");
    }
    return 0;
}