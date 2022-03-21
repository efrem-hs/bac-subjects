#include <iostream>

using namespace std;

int main()
{
    int A[25][25],m,n, nr = 0;
    cin >> m >> n;
    for (int i = 1; i<=m; i++)
    {
        for (int j = 1; j<=n; j++)
        {
            A[i][j] = m*n - nr;
            nr++;
        }
    }

    for (int i = 1; i<=m; i++)
    {
        for (int j = 1; j<=n; j++)
            cout << A[i][j] << " ";
        cout << endl;
    }

    return 0;
}
