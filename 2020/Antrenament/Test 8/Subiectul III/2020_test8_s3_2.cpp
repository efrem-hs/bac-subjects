#include <iostream>

using namespace std;

int a[21][21],n,k;

int main()
{
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            cin >> a[i][j];
    int prim = a[k][1];
    for (int j = 1; j < k; j++)
            a[k][j] = a[k][j+1];
    if (k > 1)
        a[k][k-1] = prim;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
            cout << a[i][j] << ' ';
        cout << endl;
    }

    return 0;

}
