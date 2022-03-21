void minus(int v[], int& n)
{
    for (int i = 1; i <= n; i++)
    {
        if (v[i] != 0)
        {
            n++;
            for (int j = n; j > i; j--)
                v[j] = v[j-1];
            v[i+1] = -v[i+1];
            i = i + 1;
        }
    }
}