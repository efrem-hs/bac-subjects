void sub(int n, int v[], int x)
{
    for (int i = 1; i <= n; i++)
    {
        if (v[i] == x)
            for (int j = i; j > 1; j--)
            {
                int aux = v[j-1];
                v[j-1] = v[j];
                v[j] = aux;
            }
    }
}