#include <stdio.h>

void isPerfect(int n)
{
    int i, g;
    g = 0;
    for (i=1; i < n; i++)
    {
        if (n%i==0)
        {
            g = g + i;
        }
    }
    if (g==n)
    {
        printf("%d is a perfect number.", n);
    }
    else
    {
        printf("%d is not a perfect number.", n);
    }
}
int main()
{
    int n;
    printf("Enter any number\n");
    scanf("%d", &n);
    isPerfect(n);
    return 0;
}