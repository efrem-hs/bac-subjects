#include <iostream>

using namespace std;

int a[11][11],n,x;

int main()
{
    cin >> n >> x;
    int p = x / 10 % 10, u = x  % 10;

    for (int i = 1; i <= n; i++)
    {
        int c;
        if (i % 2)
            c = p;
        else
            c = u;
        for (int j = 1; j <= n; j++)
        {
            a[i][j] = c;
            cout << a[i][j] << " ";
        }
        cout << '\n';

    }

    return 0;
}
