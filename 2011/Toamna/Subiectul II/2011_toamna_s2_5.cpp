#include <iostream>

using namespace std;

int a[25][25],n,m;

int main()
{
    cin >> n >> m;
    for (int i = n ; i >= 1; i--)
    {
        for (int j = m; j >= 1; j--)
        {
            if (i == n || j == m)
                a[i][j] = 1;
            else
                a[i][j] = (a[i+1][j] + a[i][j+1])%10;
        }
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
            cout << a[i][j] << ' ';
        cout << endl;
    }
    return 0;
}
