#include <iostream>

using namespace std;

int a[16][16],n;

int main()
{
    cin >> n;

    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == n)
                a[i][j] = j;
            else if (j > i)
                a[i][j] = 0;
            else if (j == 1)
                a[i][j] = a[i+1][j] + a[i+1][j+1];
            else
                a[i][j] = a[i+1][j-1] + a[i+1][j] + a[i+1][j+1];
        }
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << a[i][j] << ' ';
        }
        cout << '\n';
    }

    return 0;
}
