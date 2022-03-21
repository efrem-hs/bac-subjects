int factori(int n, int m)
{
    int k = 2,nr = 0;
    while (n != 1 && m != 1)
    {
        int nr1 = 0, nr2 = 0;
        while (n % k == 0)
        {
            n/=k;
            nr1++;
        }
        while (m % k == 0)
        {
            m/=k;
            nr2++;
        }
        if (nr1 > 0 && nr2 > 0)
            nr++;
        k++;
    }
    return nr;
}