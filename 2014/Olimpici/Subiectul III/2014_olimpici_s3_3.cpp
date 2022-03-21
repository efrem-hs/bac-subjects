void perfect(int a, int b)
{
    for (int i = b; i >= a; i--)
    {
        int s = 0;
        for (int d = 1; d <= i / 2; d++)
            if (i % d == 0)
                s+=d;
        if (s == i)
            cout << i << ' ';
    }
}