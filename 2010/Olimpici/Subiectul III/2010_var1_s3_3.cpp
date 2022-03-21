void ordonare(int n, int a[])
{
    int par[20],k = 0;
    for (int i = 1; i <= n; i++)
    {
        if (a[i] % 2 == 0)
        {
            k++;
            par[k] = a[i];
        }
    }
    for (int i = 1; i < k; i++)
    {
        for (int j = i + 1; j <= k; j++)
        {
            if (par[j] < par[i])
            {
                int aux = par[i];
                par[i] = par[j];
                par[j] = aux;
            }
        }
    }
    int k1 = 0;
    for (int i = 1; i <= n; i++)
    {
        if (a[i] % 2 == 0)
        {
            k1++;
            a[i] = par[k1];
        }
    }
}