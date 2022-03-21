#include <iostream>

using namespace std;

int a[21][21],m,n,nr;

int main()
{
    cin >> m >> n;
    for (int i = 1; i <= m; i++)
        for (int j = 1; j <= n; j++)
            cin >> a[i][j];
    for (int j = 2; j <= n; j++)
    {
        int ok = 1;
        for (int i = 1; i <= m; i++)
        {
            if (a[i][j] == a[i][1])
            {
                ok = 0;
                break;
            }
        }
        if (ok == 1)
            nr++;
    }

    cout << nr;
    return 0;
}
