#include <iostream>

using namespace std;

int main()
{
    int A[31][31],n;
    cin >> n;
    for (int i = 1; i<=n; i++)
    {
        for (int j = 1; j<=n; j++)
            cin >> A[i][j];
    }
    int p = 1, OK = 0;
    for (int j = n; j>=1; j--)
    {
        int minElement = A[1][j];
        for (int i = 2; i<=n; i++)
            if (A[i][j] < minElement)
                minElement = A[i][j];
        if (minElement == A[n-j+1][j])
        {
            OK = 1;
            p = p * minElement;

        }

    }

    if (OK == 1)
        cout << p%10;
    else
        cout << "NU EXISTA";

    return 0;
}

