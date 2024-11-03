#include <stdio.h>

void isPal(int n)
{
    int x, i, g;
    for (x=1; x<=n; x++)
    {
        g = 0;
        for (i=1; i < x; i++)
        {
            if (x%i==0)
            {
                g = g + i;
            }
        }
        if (g==x)
        {
            printf("%d ", x);
        }
    }
}
int main()
{
    int n;
    printf("Enter limit\n");
    scanf("%d", &n);
    isPal(n);
    return 0;
}