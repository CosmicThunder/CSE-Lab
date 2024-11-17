#include <stdio.h>

void Numbers(int a)
{
    if (a == 0)
        return;
    Numbers(a - 1);
    printf("%d      ", a);
}

void Pattern(int n, int a)
{
    if (a > n)
        return;
    Numbers(a);
    printf("\n");
    Pattern(n, a + 1);
}

int main()
{
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    Pattern(n, 1);

    return 0;
}
