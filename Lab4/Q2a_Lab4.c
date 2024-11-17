#include <stdio.h>

int main()
{
    int r,c,i,j;
    printf("Enter the number of rows: ");
    scanf("%d",&r);
    printf("\nEnter the number of columns: ");
    scanf("%d",&c);
    for (i=0; i<=r; i++)
    {
        for (j=0; j<=c; j++)
        {
            printf("%d ",i);
            printf("%d ",j);
            printf("  ");
        }
        printf("\n");
    }
    return 0;
}