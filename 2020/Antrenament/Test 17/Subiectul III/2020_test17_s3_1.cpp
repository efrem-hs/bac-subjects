int maxim(int n)
{
    int imp = -1;
    while (n > 0)
    {
        if (n % 2 == 1)
            if (n % 10 > imp)
                imp = n % 10;
        n/=10;
    }
    return imp;
}