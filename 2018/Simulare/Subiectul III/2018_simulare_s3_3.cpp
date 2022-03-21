void radical(int n, int& x, int& y)
{
    x = 1, y = 1;
    int k = 2;
    while (n > 1)
    {
        int p = 0;
        while (n % k == 0)
        {
            p++;
            n/=k;
        }

        if (p > 1)
        {
            for (int i = 1; i < p; i++)
                    x*=k;
            if (p % 2 == 1)
                y*=k;
            else
                x*=k;
        }
        else if (p == 1)
            y*=k;
        k++;
    }

    x = sqrt(x);

}