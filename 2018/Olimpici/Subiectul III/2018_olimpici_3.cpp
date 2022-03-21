int echilibrat(int n)
{
    int spar = 0, simp = 0, nr = 0;
    while (n > 0)
    {
        if (nr % 2 == 0)
            spar+=n%10;
        else
            simp+=n%10;
        n/=10;
        nr++;
    }
    if (spar%2 == 0 && simp%2 == 1)
        return 1;
    else
        return 0;
}
