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
            if (i % 2  != 0)
                A[i][j] = i;
            else
                A[i][j] = j;
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
