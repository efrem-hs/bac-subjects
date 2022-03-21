int putere(int n, int p)
{
    if (p == 0 || p == 1)
        return -1;
    for (int d = 2; d * d <= p; d++)
        if (p % d == 0)
            return -1;
    int nr = 0;
    while (n % p == 0)
    {
        n /= p;
        nr++;
    }
    return nr;
}