void perechi(int n)
{
    int k = 1, ok = 0;
    while (k < n / k)
    {
        if (n % k == 0)
            if (k % 2 - n / k % 2 != 0)
            {
                cout << '[' << k << ' ' << n/k << "] ";
                ok = 1;
            }
        k++;
    }
    if (ok == 0)
        cout << "nu exista";
}