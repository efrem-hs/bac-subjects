void interval(int n, int& a, int& b)
{
    a = 1, b = 1;
    for (int i = 1; i <= n - 1; i++)
        a = a * i;
    a = a + 1;
    for (int i = 1; i <= n + 1; i++)
        b = b * i;
    b = b - 1;
}