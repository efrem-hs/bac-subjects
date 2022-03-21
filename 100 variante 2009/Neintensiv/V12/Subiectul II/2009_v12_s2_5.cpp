#include <iostream>

using namespace std;

int main()
{
    int A[26][26], n;
    cin >> n;
    for (int i = 1; i<=n; i++)
    {
        for (int j = 1; j<=n; j++)
            A[i][j] = (i*j)%10;
    }

    for (int i = 1; i<=n; i++)
    {
        for (int j = 1; j<=n; j++)
            cout << A[i][j] << " ";
        cout << endl;
    }

    return 0;
}
