void paritate(int n, int& nr)
{
    nr = 0;
    for (int d = 1; d <= n; d++)
    {
        if (n % d == 0)
            if (n % 2 - d % 2 == 0)
                nr++;
    }
}