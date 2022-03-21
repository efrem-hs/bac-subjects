#include <iostream>

using namespace std;

int a[21][401],n,k,nr,x;

int main()
{
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        x = i;
        for (int j = 1; j <= n*k; j++)
        {
            a[i][j] = x;
            nr++;
            if (nr == k)
            {
                x++;
                nr = 0;
            }
        }
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n*k; j++)
            cout << a[i][j] << ' ';
        cout << endl;
    }
    return 0;
}