void Impar(int& n)
{
    int nr = 0, p = 1;
    while (n > 0)
    {
        if (n % 2 == 1)
            nr = nr + p * (n%10-1);
        else
            nr = nr + p * (n%10);
        p*=10;
        n/=10;
    }
    n = nr;
}