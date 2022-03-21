#include <iostream>

using namespace std;

int a[25][25],n,m, k = 1;

int main()
{
    cin >> n >> m;

    for (int j = 1; j <= m; j++)
    {
        for (int i = 1; i <= n; i++)
        {
            a[i][j] = k;
            k++;
        }
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cout << a[i][j] << ' ';
        }
        cout << '\n';
    }

    return 0;
}
