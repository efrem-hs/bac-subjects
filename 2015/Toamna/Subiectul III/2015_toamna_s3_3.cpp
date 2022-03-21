int NrPrime(int n)
{
    int nr = 0;
    while (n > 0)
    {
        int c = n % 10, ok = 1;
        if (c == 1 || c == 0)
            ok = 0;
        for (int d = 2; d * d <= c; d++)
            if (c % d == 0)
                ok = 0;
        if (ok == 1)
            nr++;
        n/=10;
    }

    return nr;
}