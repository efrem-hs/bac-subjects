int pDoi(int n)
{
    int maxPutere = 0, p = 1;
    while (p <= n)
    {
        if (p > maxPutere)
            maxPutere = p;
        p *= 2;
    }

    return maxPutere;
}