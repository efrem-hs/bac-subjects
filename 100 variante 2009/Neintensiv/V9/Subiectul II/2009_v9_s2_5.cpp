#include <iostream>

using namespace std;

int main()
{
    int A[24][24], n;
    cin >> n;
    for (int i = 1; i<=n; i++)
    {
        for (int j = 1; j<=n; j++)
        {
            cin >> A[i][j];
        }
    }

    for (int j = 1; j < n; j++) cout << A[1][j] << " ";
    for (int i = 1; i < n; i++) cout << A[i][n] << " ";
    for (int j = n; j > 1; j--) cout << A[n][j] << " ";
    for (int i = n; i > 1; i--) cout << A[i][1] << " ";

    return 0;
}
