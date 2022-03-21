void inserare(int& n)
{
    int nr = 0, p = 1;
    while(n > 9)
    {
        int dif = n / 10 % 10 - n % 10;
        if (dif < 0)
            dif = -dif;
        nr = nr + p * (n % 10 + dif * 10);
        p *= 100;
        n /= 10;
    }
   nr = nr + p * (n % 10);
   n = nr;
}