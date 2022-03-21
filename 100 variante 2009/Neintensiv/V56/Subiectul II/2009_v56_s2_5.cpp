#include <iostream>

using namespace std;

int a[26][26],n,k;

int main()
{
    cin >> n >> k;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j <= k)
                a[i][j] = 1;
            else
                a[i][j] = 2;
            cout << a[i][j] << " ";
        }
        cout << '\n';
    }

    return 0;
}
