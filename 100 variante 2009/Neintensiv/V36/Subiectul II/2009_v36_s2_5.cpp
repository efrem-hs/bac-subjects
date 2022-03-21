#include <iostream>

using namespace std;

int main()
{

    int A[31][31],n,m;
    cin >> n >> m;
    for (int i = 1; i<=n; i++)
    {
        for (int j = 1; j<=m; j++)
            cin >> A[i][j];
    }

    for (int j = m; j >=1; j--)
    {
        int minElement = A[j][1];
        for (int i = 2; i<=n; i++)
            if (A[i][j] < minElement)
                minElement = A[i][j];
        cout << minElement << " ";
    }

    return 0;
}

