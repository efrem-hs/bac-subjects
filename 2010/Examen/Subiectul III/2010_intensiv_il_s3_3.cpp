void sir(int n, int a[])
{
    int x = 1,y = 1, z, k1 = 0, k2 = 2, k3 = 0;
    int par[21], imp[21];
    imp[1] = 1, imp[2] = 1;
    for (int i = 3; i <= n; i++)
    {
        z = 3*y-x;
        x = y;
        y = z;
        if (z % 2 == 0)
        {
            k1++;
            par[k1] = z;
        }
        else
        {
            k2++;
            imp[k2]= z;
        }
    }

    for (int i = 1; i <= k2; i++)
    {
        k3++;
        a[k3] = imp[i];
    }
    for (int i = 1; i <= k1; i++)
    {
        k3++;
        a[k3] = par[i];
    }
}