void inserare(int a[], int& n)
{
    for (int i = 1; i <= n; i++)
    {
        if (a[i] % 2 == 0)
        {
            for (int j = n + 1; j >= i+1; j--)
                a[j] = a[j-1];
            a[i+1] = 2011;
            n++;
            i++;
        }
    }
}