void generatoare(int n)
{
    int ok = 0;
    for (int a = 2; a <= n/2; a+=2)
        for (int b = 1; a*b <= n; b++)
            if (a*b + a/b == n)
            {
                cout << a << '-' << b << ' ';
                ok = 1;
            }
    if (ok == 0)
        cout << "nu exista";
}
