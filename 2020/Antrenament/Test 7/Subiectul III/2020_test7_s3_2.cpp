#include <iostream>

using namespace std;

int a[21][21],m,n,ok;

int main()
{
    cin >> m >> n;
    for (int i = 1; i <= m; i++)
        for (int j = 1; j <= n; j++)
            cin >> a[i][j];
    for (int i1 = 1; i1 <= m; i1++)
    {
        for (int i2 = 1; i2 <= m; i2++)
        {
            if (a[i1][1] == a[i2][n])
            {
                cout <<a[i1][1] << ' ';
                ok = 1;
            }

        }
    }

    if (ok == 0)
        cout << "nepolarizate";

    return 0;

}
