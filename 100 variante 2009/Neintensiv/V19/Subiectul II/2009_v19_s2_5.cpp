#include <iostream>

using namespace std;

int main()
{
    int A[21][21], n;
    cin >> n;
    for (int i = 1; i<=n; i++)
    {
        for (int j = 1; j<=n; j++)
        {
            if (j % 2 != 0)
                A[i][j] = i + j;
            else
                A[i][j] = i;

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
