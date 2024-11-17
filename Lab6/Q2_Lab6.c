#include <stdio.h>

int square(int x)
{
    return x * x;
}

int input()
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    return square(a);
}

int main()
{
    printf("Result: %d\n",input());

    return 0;
}
