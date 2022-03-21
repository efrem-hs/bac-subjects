#include <iostream>

using namespace std;

int a[21][21],m,n;
int nr;

int main()
{
    cin >> m >> n;
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
            cin >> a[i][j];
    }

    for (int i = 1; i < m; i++)
    {
        int ok = 1;
        for (int j = 1; j <= n; j++)
        {
            if (a[i][j] == a[m][j])
                ok = 0;
        }
        if (ok == 1)
            nr++;
    }

    cout << nr;


    return 0;
}
