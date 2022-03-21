void inserare(int& n, int a[])
{
    for (int i = 1; i <= n; i++)
    {
        if (a[i] % 2 == 0)
        {
            n++;
            for (int j = n; j > i; j--)
                a[j] = a[j-1];
            a[i] = a[i] / 2;
            i = i + 1;
        }
    }
}