#include <iostream>

using namespace std;

int main()
{
    int A[10][10], n;
    cin >> n;
    for (int i = 1; i<=n; i++)
    {
        for (int j = 1; j<=n; j++)
            cin >> A[i][j];
    }

    int OK = 0;

    for (int j = 1; j<=n; j++)
    {
        int p = 1;
        for (int i = 1; i<=n; i++)
        {
            p*=A[i][j];
        }
        cout << p << " ";
    }

    return 0;
}

