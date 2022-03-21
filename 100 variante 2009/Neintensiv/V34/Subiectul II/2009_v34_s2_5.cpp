#include <iostream>

using namespace std;

int main()
{
    int A[21][21],n;
    cin >> n;
    for (int i = 1; i<=n; i++)
    {
        for (int j = 1; j<=n; j++)
        {
            if (i == 1 && j == 1)
                A[i][j] = 2;
            else if (j == 1)
            {
                A[i][j] = A[i-1][n] + 2;
                if (A[i][j]%3 == 0) A[i][j]+=2;
            }
            else
            {
                A[i][j] = A[i][j-1] + 2;
                if (A[i][j]%3 == 0) A[i][j]+=2;
            }
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

