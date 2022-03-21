int nrDivPrim(int n)
{
    int nr = 0, k = 2;
    while (n > 1)
    {
        int p = 0;
        while (n % k == 0)
        {
            n/=k;
            p++;
        }
        if (p % 2 == 1)
            nr++;
        k++;
    }
    return nr;
}