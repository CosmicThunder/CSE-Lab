#include <stdio.h>

void isPal(int n)
{
    int a, i, d, j;
    for (j=10; j<=n; j++)
    {
        i = j;
        d = 0;
        while (i!=0)
        {
            a = i%10;
            d = (10*d) + a;
            i = i/10;
        }
        if (d == j)
        {
            printf("%d ", j);
        }
    }
}
int main()
{
    int n;
    printf("Enter limit:\n");
    scanf("%d", &n);
    isPal(n);
    return 0;
}