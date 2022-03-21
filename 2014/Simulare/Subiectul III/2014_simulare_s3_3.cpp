void divizori(int n, int& mic, int& mare)
{
    mic = 0, mare = 0;
    for (int d = 2; d * d < n; d++)
    {
        if (n % d == 0)
        {
            mic = d;
            mare = n / d;
            break;
        }
    }

    if (mic == mare)
    {
        mic = 0;
        mare = 0;
    }
}