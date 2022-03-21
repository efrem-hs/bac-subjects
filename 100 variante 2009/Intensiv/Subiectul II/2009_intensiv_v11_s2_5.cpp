#include <iostream>

using namespace std;

int main()
{
    int A[11][11], n, m;
    cin >> n >> m;
    for (int i = 1; i<=n; i++)
    {
        for (int j = 1; j<=m; j++)
            cin >> A[i][j];
    }

    int maxMin = -1;

    for (int i = 1; i<=n; i++)
    {
        int minLinie = A[i][1];
        for (int j = 2; j<=m; j++)
        {
            if (A[i][j] < minLinie)
                minLinie = A[i][j];
        }
        if (minLinie > maxMin)
            maxMin = minLinie;
    }

    cout << maxMin;

    return 0;
}
