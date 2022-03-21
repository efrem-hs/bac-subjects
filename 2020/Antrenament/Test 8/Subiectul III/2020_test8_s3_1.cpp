int suma(int n)
{
    int s = 0, p = 2;
    while (n > 1)
    {
        if (n % p == 0)
            s+=p;
        while (n % p == 0)
            n /= p;
        p++;
    }
    return s;
}