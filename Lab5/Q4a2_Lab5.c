#include <stdio.h>
#include <math.h>

void isPrime(int n)
{
    int s,a,i;
    printf("2 ");
    for (int k = 2; k <= n; k++)
    {
        s = ceil(sqrt(k));
        a = 0;
        for (i = 2; i <= s; i++)
        {
            if (k%i == 0)
            a = a+1;
        }
        if (a == 0)
        printf("%d ", k);
    }
}
int main()
{
    int n;
    printf("Enter limit:\n");
    scanf("%d", &n);
    isPrime(n);
    return 0;
}