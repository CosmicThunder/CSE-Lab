#include <stdio.h>

int Sum()
{
    static int sum = 0;
    static int n = 1;
    sum += n;
    n++;
    return sum;
}

int main()
{
    int t;

    printf("Enter the number of terms: ");
    scanf("%d", &t);

    printf("Cumulative sums: ");
    for (int i = 1; i <= t; i++)
    {
        printf("%d ", Sum());
    }
    printf("\n");

    return 0;
}
