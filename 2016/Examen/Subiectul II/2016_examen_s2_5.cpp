#include <iostream>

using namespace std;

int a[101][101],n;

int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        a[i][1] = i;
    for (int j = 1; j <= n; j++)
        a[n][j] = n;
    for (int i = n-1; i >= 1; i--)
        for (int j = 2; j <= n; j++)
            a[i][j] = a[i][j-1] + a[i+1][j-1];

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
            cout << a[i][j] << ' ';
        cout << endl;
    }

    return 0;
}
