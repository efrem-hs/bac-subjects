#include <iostream>

using namespace std;

int a[25][25],n,m;
int x = 1,d = 0;

int main()
{

    cin >> n >> m;

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            x = x - 1 + m;
            d = 1;
        }
        else if (i > 1)
        {
            x = x + 1 + m;
            d = 0;
        }
        for (int j = 1; j <= m; j++)
        {
            a[i][j] = x;
            if (d)
                x--;
            else
                x++;
            cout << a[i][j] << ' ';
        }
        cout << '\n';
    }

    return 0;
}
