void putere(int n, int& d, int& p)
{
    d = 0, p = 0;
    int k = 2,k1 = 0;
    while(n > 1)
    {
        while(n%k == 0)
        {
            n/=k;
            k1++;
        }
        if (k1 > p)
        {
            p = k1;
            d = k;
        }
        else if (k1 == p && p != 0)
        {
            if (k > d)
            {
                p = k1;
                d = k;
            }
        }
        k++;
        k1 = 0;
    }
}