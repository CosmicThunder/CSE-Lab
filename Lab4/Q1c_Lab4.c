#include <stdio.h>

int gcd(int a, int b)
{
    int g = 1;
    for (int i = 1; i <= a && i <= b; i++)
    {
        if (a % i == 0 && b % i == 0)
            g = i;
    }
    return g;
}
int main()
{
    int a,b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    printf("GCD: %d\n", gcd(a, b));
    return 0;
}