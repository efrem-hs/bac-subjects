void patrate(int x, int y)
{
    int s = 0;
    for (int i = x; i <= y; i++)
    {
        int ok = 0;
        for (int d = 1; d <= i; d++)
            if (i % d == 0)
                if (d * d == i)
                {
                    ok = 1;
                    if (s == 0)
                        cout << i;
                    else
                        cout << '+' << i;
                }
        if (ok == 1)
            s+=i;
    }
    if (s == 0)
        cout << "nu exista";
    else
        cout << '=' << s;
}