int isPrime(int n)
{
    if (n <= 1)
        return 0;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        return 0;
    }
    return 1;
}

int isPal(int n)
{
    int original = n, reversed = 0, remainder;
    while (n != 0)
    {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }
    return original == reversed;
}

int isPerfect(int n)
{
    int sum = 0;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
            sum += i;
    }
    return sum == n;
}

int isArmstrong(int n)
{
    int original = n, sum = 0, remainder, digits = 0;
    int t = n;
    while (t != 0)
    {
        digits++;
        t /= 10;
    }
    t = n;
    while (t != 0)
    {
        remainder = t % 10;
        int p = 1;
        for (int i = 0; i < digits; i++)
        {
            p *= remainder;
        }
        sum += p;
        t /= 10;
    }
    return sum == original;
}
