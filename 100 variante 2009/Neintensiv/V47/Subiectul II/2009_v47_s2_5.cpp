#include <iostream>

using namespace std;

void stergereLinie(int M[][11], int& m, int n, int linie)
{
    for (int i = linie; i<m; i++)
    {
        for (int j = 1; j<=n; j++)
            M[i][j] = M[i+1][j];
    }
    m--;
}

int main()
{
    int A[11][11],m,n;
    cin >> m >> n;
    for (int i = 1; i<=m; i++)
    {
        for (int j = 1; j<=n; j++)
            cin >> A[i][j];
    }

    for (int i = m; i>=1; i--)
    {
        if (i%2 != 0)
            stergereLinie(A,m,n,i);
    }

    for (int i = 1; i<=m; i++)
    {
        for (int j = 1; j<=n; j++)
            cout << A[i][j] << " ";
        cout << endl;
    }

    return 0;
}

