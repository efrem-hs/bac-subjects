#include <iostream>

using namespace std;

int main()
{
    int A[7][7], n;
    cin >> n;
    for(int i = 1; i<=n; i++)
    {
        for (int j = 1; j<=n; j++)
        {
            cin >> A[i][j];
        }

    }

    int p = 1;

    for (int j = 2; j<=n; j++)
    {
        float c = A[1][j]/A[1][1];
        int OK = 1;
        for (int i = 2; i<=n; i++)
        {
            if (float(A[i][j])/A[i][1] != c)
                OK = 0;
        }
        if (OK == 1)
            p*=c;
    }

    cout << p;

    return 0;
}

