#include <iostream>

using namespace std;

int A[21][21],m,n,k;

int main()
{

    cin >> m >> n;
    k = 2;
    for (int i = 1; i <= m; i++)
        for (int j = 1; j <= n; j++)
        {
            if (k % 5 == 0)
                k+=2;
            A[i][j] = k;
            k+=2;
        }

    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
            cout << A[i][j] << ' ';
        cout << endl;
    }

    return 0;
}
