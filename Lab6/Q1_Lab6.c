#include <stdio.h>

double add(double a, double b)
{
    return a + b;
}

double subtract(double a, double b)
{
    return a - b;
}

double multiply(double a, double b)
{
    return a * b;
}

double divide(double a, double b)
{
    if (b != 0)
        return a / b;
    else
    {
        printf("Error: Division by zero\n");
        return 0.0;
    }
}

int main()
{
    double (*operation)(double, double);

    double a, b, r;
    char op;

    printf("Enter first number: ");
    scanf("%lf", &a);

    printf("Enter second number: ");
    scanf("%lf", &b);

    printf("Enter operation (+, -, *, /): ");
    scanf(" %c", &op);

    switch (op)
    {
        case '+':
            operation = add;
            break;
        case '-':
            operation = subtract;
            break;
        case '*':
            operation = multiply;
            break;
        case '/':
            operation = divide;
            break;
        default:
            printf("Invalid operation\n");
            return 1;
    }

    r = operation(a, b);
    printf("Result: %.2f\n", r);

    return 0;
}
