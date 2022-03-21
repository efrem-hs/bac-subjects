#include <iostream>

using namespace std;

int main()
{
    int A[25][25], n;
    cin >> n;
    for (int i = 1; i<=n; i++)
    {
        for (int j = 1; j<=n; j++)
        {
            if (i+j == n+1)
                A[i][j] = 0;
            else
                A[i][j] = n - i + 1;
        }
    }

    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j<=n; j++)
            cout << A[i][j] << " ";
        cout << endl;
    }

    return 0;
}
