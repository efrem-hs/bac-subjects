void zero(int v[], int n)
{
    int pare[51] = {}, imp[51] = {},k1,k2,t1,t2;
    k1 = 0, k2 = 0;
    for (int i = 1; i <= 2*n; i++)
        if (v[i] % 2 == 0)
        {
            k1++;
            pare[k1] = v[i];
        }
        else
        {
            k2++;
            imp[k2] = v[i];
        }
    t1 = 1, t2 = 1;
    for (int i = 1; i <= 2*n; i++)
        if (i % 2 == 0)
        {
            v[i] = pare[t1];
            t1++;
        }
        else
        {
            v[i] = imp[t2];
            t2++;
        }
}