#include <stdio.h>

void multiply(int F[2][2], int M[2][2]);
void power(int F[2][2], int n);
int foo(int n)
{
    int F[2][2] = {{1, 1}, {1, 0}};
    if (n == 0)
       return 0;
    power(F, n - 1);
    return F[0][0];
}

void power(int F[2][2], int n)
{
    if (n == 0 || n == 1)
       return ;
    int M[2][2] = {{1, 1}, {1, 0}};
    power(F, n / 2);
    multiply(F, F);
    if (n % 2 != 0)
       multiply(F, M);
}

void multiply(int F[2][2], int M[2][2])
{
    int w = F[0][0] * M[0][0] + F[0][1] * M[1][0];
    int x = F[0][0] * M[0][1] + F[0][1] * M[1][1];
    int y = F[1][0] * M[0][0] + F[1][1] * M[1][0];
    int z = F[1][0] * M[0][1] + F[1][1] * M[1][1];
    F[0][0] = w;
    F[0][1] = x;
    F[1][0] = y;
    F[1][1] = z;
}

int main()
{
    int n = 9;
    printf("%d", foo(9));
    return 0;
}