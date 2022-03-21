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
        for (int i = 1; i<=n; i++)
        {   int p = 1;
            for (int k = 1; k<=n; k++)
            {
                if (k!=i)
                    p*=A[k][j];
            }
            if (p==A[i][j])
            {
                OK = 1;
                cout << A[i][j] << " ";
            }
        }
    }

    if (OK == 0)
        cout << "NU EXISTA";

    return 0;
}

