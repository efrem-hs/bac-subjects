void duplicare(unsigned short n, long& d)
{
    d = 0;
    unsigned long p = 1;
    bool OK = false;
    while (n > 0)
    {
        if (n % 2 == 1)
        {
            OK = true;
            d = d + (n % 10 * 10 + n % 10) * p;
            p *= 100;
        }
        else
        {
            d = d + (n % 10) * p;
            p *= 10;
        }
        n /= 10;
    }
    if (!OK)
        d = -1;
}