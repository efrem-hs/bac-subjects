int inter(int a[], int b[], int na, int nb)
{
    int v[101],n = 0;
    for (int i = 1; i <= na; i++)
    {
        for (int j = 1; j <= nb; j++)
        {
            if (a[i] == b[j])
            {
                int ok = 1;
                for (int k = 1; k <= n; k++)
                    if (v[k] == a[i])
                        ok = 0;
                if (ok == 0) break;
                n++;
                v[n] = a[i];
                break;
            }
        }
    }
    return n;
}