void dublu(int v[], int& n)
{
    for (int i = 1; i <= n; i++)
        if (v[i] > 0)
        {
            n = n + 1;
            for (int j = n; j > i; j--)
                v[j] = v[j-1];
            i = i + 1;
        }
}