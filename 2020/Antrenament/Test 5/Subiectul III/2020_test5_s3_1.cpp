int baza(int n)
{
    int maxcif = 0;
    while (n > 0)
    {
        if (n % 10 > maxcif)
            maxcif = n % 10;
        n/=10;
    }
    return maxcif+1;
}