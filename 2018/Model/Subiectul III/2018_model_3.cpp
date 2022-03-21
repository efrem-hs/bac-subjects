void divizori(int n, int& x, int& y, int& z)
{
    int OK = 0;
    for (int d = n-1; d >= 1; d--)
    {
        if (n % d == 0)
        {
            if (OK == 0)
            {
                z = d;
                OK++;
            }
            else if (OK == 1)
            {
                y = d;
                OK++;
            }
            else if (OK == 2)
            {
                if (z + y + d == n)
                {
                    x = d;
                    break;
                }
            }
        }
    }

    if (x == 0 || y == 0 || z == 0)
        x = y = z = 0;
}