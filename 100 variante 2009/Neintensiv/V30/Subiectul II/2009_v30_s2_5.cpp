#include <iostream>

using namespace std;

int main()
{
    int A[16][16], n;
    cin >> n;
    for (int i = 1; i<=n; i++)
    {
        for (int j = 1; j<=n; j++)
        {
            if (i == 1 || j == 1)
                A[i][j] = 1;
            else
                A[i][j] = A[i][j-1] + A[i-1][j];
        }
    }

    for (int i = 1; i<=n; i++)
    {
        for (int j = 1; j<=n; j++)
            cout << A[i][j] << " ";
        cout << endl;
    }

    return 0;
}

