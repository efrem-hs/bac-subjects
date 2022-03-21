#include <iostream>

using namespace std;

int main()
{
    int A[51][51],n;
    cin >> n;
    for (int i = 1; i<=n; i++)
    {
        for (int j = 1; j<=n; j++)
        {
            cin >> A[i][j];
        }
    }

    for (int j = 1; j<=n; j++)
    {
        int minElement = A[1][j];
        for (int i = 2; i<=n; i++)
            if (A[i][j] < minElement)
                minElement = A[i][j];
        cout << minElement << " ";
    }

    return 0;
}

