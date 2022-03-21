#include <iostream>

using namespace std;

int main()
{
    int A[101][101],m,n;
    cin >> m >> n;
    for (int i = 1; i<=m; i++)
    {
        for (int j = 1; j<=n; j++)
        {
            cin >> A[i][j];
        }
    }
    int maxP = -1;
    for (int j = 1; j<=n; j++)
    {
        int p = 1;
        for (int i = 1; i<=m; i++)
        {
            p*=A[i][j];
        }
        if (p > maxP)
            maxP = p;
    }

    for (int j = 1; j<=n; j++)
    {
        int p = 1;
        for (int i = 1; i<=m; i++)
        {
            p*=A[i][j];
        }
        if (p == maxP)
            cout << j << " ";
    }



    return 0;
}
