void suma(int n, int& s)
{
    s = 0;
    int cif[10] = {};
    while (n > 0)
    {
        if (n % 2 == 0)
            cif[n%10] = 1;
        n/=10;
    }
    for (int i = 2; i <= 8; i+=2)
        if (cif[i] == 1)
            s += i;
}