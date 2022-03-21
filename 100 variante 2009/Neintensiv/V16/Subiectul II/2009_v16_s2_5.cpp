#include <iostream>

using namespace std;

int main()
{
    int A[17][17], n;
    cin >> n;
    for (int i = 1; i<=n; i++)
    {
        for (int j = 1; j<=n; j++)
        {
            if (i == j || i + j == n +1)
                A[i][j] = 4;
            else A[i][j] = 3;
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
