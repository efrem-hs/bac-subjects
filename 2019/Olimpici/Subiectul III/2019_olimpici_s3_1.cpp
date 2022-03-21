int Egal(int n)
{
    int nr = 0, impar =  -1;
    while (n > 0)
    {
        if (n % 10 == impar)
            return 0;
        if (n % 2 == 1)
            impar = n % 2;
        n/=10;
    }
    return 1;
}