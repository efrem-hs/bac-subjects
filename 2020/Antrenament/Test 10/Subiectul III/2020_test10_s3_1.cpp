void produs(int n, int& p)
{
    p = 1;
    int cifre[10] = {};
    while (n > 0)
    {
        if (n % 2 == 0)
            cifre[n%10] = 1;
        n/=10;
    }
    for (int i = 0; i <= 9; i++)
        if (cifre[i] == 1)
            p*=i;
    if (p == 1)
        p = -1;
}