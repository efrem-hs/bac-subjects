#include <iostream>
#include <cstring>

using namespace std;

int a[51][51],n;

int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
        {
            if (i + j == n || i + j == n+1 || i + j == n + 2)
                a[i][j] = 1;
            else
                a[i][j] = 2;
        }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
            cout << a[i][j] << ' ';
        cout << endl;
    }
    return 0;
}
