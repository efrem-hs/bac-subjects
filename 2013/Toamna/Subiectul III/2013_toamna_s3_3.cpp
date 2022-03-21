int sub(int n, int v[], int k)
{
    int s = 0, nr = 0;
    for (int i = 1; i <= n; i++)
    {
        if (v[i] % 2 == 1)
        {
            s += v[i];
            nr++;
        }
        if (nr == k)
            return s;
    }
    return -1;
}