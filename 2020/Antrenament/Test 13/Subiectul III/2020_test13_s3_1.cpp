void putere(int n, int& d, int& p)
{
    d = 0, p = 0;
    int k = 2;
    while (n > 1)
    {
        int p1 = 0;
        while (n % k == 0)
        {
            n/=k;
            p1++;
        }
        if (p1 > 0)
        {
            if (p == 0)
            {
                d = k;
                p = p1;
            }
            else
                if (p1 < p)
                {
                    d = k;
                    p = p1;
                }
        }
        k++;
    }
}