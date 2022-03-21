void produs(int a, int& k)
{
    k = 1;
    int p = 1;
    while (p * k <= a)
    {
        p = p * k;
        k+=2;
    }
    k-=2;
}