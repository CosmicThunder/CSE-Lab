#include <stdio.h>

void convert(int n)
{
    if (n == 0)
        return;
    convert(n/2);
    printf("%d", n % 2);
}

int main()
{
    int a;

    printf("Enter a decimal number: ");
    scanf("%d", &a);

    printf("Binary of %d is: ", a);

    if (a == 0)
        printf("0");
    else
        convert(a);

    return 0;
}