#include <stdio.h>

int main()
{
    int n,i,j,a=1;
    printf("Enter the number of columns: ");
    scanf("%d",&n);
    for (i=1; i<=n; i++)
    {
        for (j=1; j<=i; j++)
        {
            printf("%d",a);
            printf("     ");
            a = a+1;
        }
        printf("\n");
    }
    a = a-(2*n)+1;
    for (i=(n-1); i>=1; i--)
    {
        for (j=1; j<=i; j++)
        {
            printf("%d",a);
            printf("     ");
            a = a+1;
        }
        a = a-(2*(j-1))+1;
        printf("\n");
    }
    return 0;
}