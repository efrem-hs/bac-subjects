int transformareBaza10(int b, int n)
{
    int k = 0, s = 0;
    while (n > 0)
    {
        int p = 1;
        for (int i = 1; i <= k; i++)
            p = p * b;
        s = s + (n % 10) * p;
        k++;
        n/=10;
    }
    return s;
}