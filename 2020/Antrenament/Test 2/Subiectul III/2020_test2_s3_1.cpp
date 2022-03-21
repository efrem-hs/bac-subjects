void fii(int n)
{
    int div[101],k = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            k++;
            div[k] = i;
        }
    }

    for (int i = 1; i <= k/2; i++)
        cout << '(' << div[k-i+1] << ' ' << div[i] << ')' << ' ';

}