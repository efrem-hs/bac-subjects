void prodprim(int n, int& p)
{
    int k = 2;
    p = 1;
    while (n > 1)
    {
        int ok = 0;
        while (n % k == 0)
        {
            n/=k;
            ok = 1;
        }
        if (ok == 1)
            p*=k;
        k++;
    }
}