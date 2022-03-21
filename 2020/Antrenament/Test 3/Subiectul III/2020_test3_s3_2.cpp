#include <iostream>

using namespace std;

int a[21][21],n;

int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            a[i][j] = n - (i - 1) - j;
            if (a[i][j] < 0)
                a[i][j] = -a[i][j];
        }
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
            cout << a[i][j] << ' ';
        cout << endl;
    }


    return 0;
}
