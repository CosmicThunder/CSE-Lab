#include <stdio.h>
#include <math.h>

void install(int n)
{
    int i,a,s,q,r,count;
    for (i=1; i<=n; i++)
    {
        a = i;
        q = count = 0;
        while (a != 0)
        {
            a = a/10;
            count++;
        }
        a = i;
        for (int j=1; j<=count; j++)
        {
            r = a%10;
            s = pow(r,count);
            q = q + s;
            a = a/10;
        }
        if (q == i)
            printf("%d ",i);
    }
}
int main()
{
    int n;
    printf("Enter limit:\n");
    scanf("%d", &n);
    install(n);
    return 0;
}