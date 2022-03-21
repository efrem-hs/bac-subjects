#include <iostream>

using namespace std;

int main()
{
    int A[24][24],n;
    cin >> n;
    for (int i = 1; i<=n; i++)
    {
        for (int j = 1; j<=n; j++)
        {
            if (i == j)
                A[i][j] = 2;
            else if (i < j)
                A[i][j] = 1;
            else
                A[i][j] = 3;
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

