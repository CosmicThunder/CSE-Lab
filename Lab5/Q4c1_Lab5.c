#include <stdio.h>
#include <math.h>

void isArmstrong(int n)
{
    int a,s,q,r,count;
    a = n;
    q = count = 0;
    while (a != 0)
    {
        a = a/10;
        count++;
    }
    a = n;
    for (int j=1; j<=count; j++)
    {
        r = a%10;
        s = pow(r,count);
        q = q + s;
        a = a/10;
    }
    if (q == n)
        printf("%d is an Armstrong number",n);
    else
        printf("%d is not an Armstrong number",n);
}
int main()
{
    int n;
    printf("Enter any number:\n");
    scanf("%d", &n);
    isArmstrong(n);
    return 0;
}