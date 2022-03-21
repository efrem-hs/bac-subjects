#include <iostream>

using namespace std;

int main()
{
    int A[11][11],B[11][11],m,n;
    cin >> m >> n;
    for (int i = 1; i<=m; i++)
    {
        for (int j = 1; j<=n; j++)
            cin >> A[i][j];
    }

    for (int j = n; j>=1; j--)
    {
        for (int i = 1; i<=m; i++)
        {
            B[n-j+1][i] = A[i][j];
            cout << B[n-j+1][i] << " ";
        }
        cout << endl;
    }


    return 0;
}

