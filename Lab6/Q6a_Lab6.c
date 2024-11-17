#include <stdio.h>
#include <math.h>

double foo(double x)
{
    if (x < 2)
       return x;
    double y = x;
    double z = (y + (x / y)) / 2;
    while (fabs(y - z) >= 0.00001)
    {
        y = z;
        z = (y + (x / y)) / 2;
    }
    return z;
}
int main()
{
    double n = 3;
    double ans = foo(n);
    printf("%f\n", ans );
    return 0;
}