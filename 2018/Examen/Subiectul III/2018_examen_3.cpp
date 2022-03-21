int resturi(int n, int x, int y, int r)
{
    int nr = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % x == r && i % y == r)
            nr++;
    }
    return nr;
}