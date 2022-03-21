#include <iostream>

using namespace std;

int eliminareLinie(int a[][25], int& m, int n, int x)
{
    for (int i = x; i < m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            a[i][j] = a[i+1][j];
        }
    }

    m--;
}

int a[25][25],m,n,x;

int main()
{
    cin >> m >> n >> x;

    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> a[i][j];
        }
    }

    eliminareLinie(a,m,n,x);

    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << a[i][j] << ' ';
        }
        cout << '\n';
    }


    return 0;
}
