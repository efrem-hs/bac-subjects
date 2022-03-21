void num(int n, int v[])
{
    for (int i = 2; i <= n; i++)
        if (v[i] <= v[1])
            v[i] = 0;
    v[1] = 0;
}
