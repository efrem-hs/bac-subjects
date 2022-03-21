int cifreImpare(int n)
{
    int aux = n, nr = 0, p = 1;
    while (n > 0)
    {
        if (n % 2 == 0)
        {
            nr = nr + (n % 10) * p;
            p*=10;
        }

        n/=10;
    }

    if (nr == aux || nr == 0)
        return -1;
    else
        return nr;
}