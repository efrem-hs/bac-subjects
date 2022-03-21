void valuri(int v[], int n)
{
    for (int i = 1; i <= 2*n; i += 2)
        v[i] = i;
    int k = 2;
    for (int i = 2*n; i >= 2; i -= 2)
    {
        v[i] = k;
        k+=2;
    }
}