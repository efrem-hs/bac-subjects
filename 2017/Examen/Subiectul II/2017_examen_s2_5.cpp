#include <iostream>

using namespace std;

int a[51][51],n,m;

int main()
{
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            cin >> a[i][j];
    int ultim = a[n][m];
    for (int j = 1; j <= m; j++)
        a[1][j] = ultim;
    for (int i = 1; i <= n; i++)
        a[i][m] = ultim;
    for (int j = 1; j <= m; j++)
        a[n][j] = ultim;
    for (int i = 1; i <= n; i++)
        a[i][1] = ultim;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
            cout << a[i][j] << ' ';
        cout << endl;
    }
    return 0;

}
