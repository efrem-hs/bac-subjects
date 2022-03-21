void divPrimMax(int n, int& p)
{
    p = 1;
    int k = 2;
    while (n > 1)
    {
        int ok = 0;
        while (n % k == 0)
        {
            n/=k;
            ok = 1;
        }
        if (ok == 1)
            if (k > p)
                p = k;
        k++;
    }
}