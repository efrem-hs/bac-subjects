void tablou(int n, int k, int a[])
{
    int d = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= k; j++)
        {
            d++;
            a[d] = i;
        }
    }
}
