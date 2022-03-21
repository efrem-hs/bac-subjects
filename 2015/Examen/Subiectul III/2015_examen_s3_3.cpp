int fibo(int n)
{
    int f1 = 1, f2 = 1, f3;
    if (n <= 2)
        return 1;
    else
    {
        int k = 2;
        while (k < n)
        {
            f3 = f1 + f2;
            f1 = f2;
            f2 = f3;

            if (f3 % 2 == 1)
                k++;
        }

        return f3;
    }
}