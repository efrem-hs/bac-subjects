void suma(int n, int& s)
{
    s = 0;
    int cifre[10] = {};
    while (n > 0)
    {
        if (n % 2 == 1)
            cifre[n%10] = 1;
        n/=10;
    }
    for (int i = 1; i <= 9; i+=2)
        if (cifre[i] == 1)
            s+=i;
}