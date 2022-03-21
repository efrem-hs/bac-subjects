int interval(int n)
{
    int x = n;
    while (true)
    {
        int OK = 1;
        for (int d = 2; d <= x/2; d++)
        {
            if (x % d == 0)
            {
                OK = 0;
                break;
            }
        }

        if (OK == 1)
        {
            x++;
            break;
        }

        x++;
    }
    return x;
}