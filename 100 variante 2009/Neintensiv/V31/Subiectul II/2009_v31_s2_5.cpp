#include <iostream>

using namespace std;

int main()
{

    int A[11][8],n,m;
    cin >> n >> m;
    for (int i = 1; i<=n; i++)
    {
        for (int j = 1; j<=m; j++)
            cin >> A[i][j];
    }

    int s = 0;
    if (n == 1)
        for (int j = 1; j<=m; j++) s+=A[1][j];
    else if (m == 1)
        for (int i = 1; i<=n; i++) s+=A[i][1];
    else
    {
        for (int j = 1; j < m; j++) s+=A[1][j];
        for (int i = 1; i < n; i++) s+=A[i][m];
        for (int j = m; j > 1; j--) s+=A[n][j];
        for (int i = n; i > 1; i--) s+=A[i][1];
    }


    cout << s;

    return 0;
}

