void divizor(int n, int& d)
{
    for (int d1 = 2; d1 <= n; d1++)
    {
        if (n % d1 == 0)
        {
            int ok = 1;
            for (int d2 = 2; d2 * d2 <= d1; d2++)
                if (d1 % d2 == 0)
                    ok = 0;
            if (ok == 1)
                d = d1;
        }
    }
}