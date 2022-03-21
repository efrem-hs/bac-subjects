#include <iostream>

using namespace std;

int main()
{
    int A[21][21], n, p, k = 1;
    cin >> n >> p;
    for (int i = 1; i<=n; i++)
    {
        for (int j = 1; j<=p; j++)
        {
            A[i][j] = k*k;
            k+=2;
        }
    }

    for (int i = 1; i<=n; i++)
    {
        for (int j = 1; j<=p; j++)
            cout << A[i][j] << " ";
        cout << endl;
    }

    return 0;
}
