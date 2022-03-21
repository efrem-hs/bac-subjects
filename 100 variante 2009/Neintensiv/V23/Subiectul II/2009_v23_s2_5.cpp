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
            if (i==1)
                A[i][j] = j;
            else if (j == 1)
                A[i][j] = i;
            else
                A[i][j] = A[i-1][j] + A[i][j-1];
        }
    }

    cout << A[m][n] % 10;

    return 0;
}
