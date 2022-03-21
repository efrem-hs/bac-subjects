#include <iostream>

using namespace std;

int a[51][51],m,n,OK;

int main()
{

    cin >> m >> n;
    int p = 1;

    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> a[i][j];
            if (a[i][j] > 0)
            {
                if (i % 2 == 0 && j % 2 == 1)
                {
                    p = p * (a[i][j] % 10);
                    OK = 1;
                }
            }
        }
    }

    if (OK)
        cout << p;
    else
        cout << "NU EXISTA";

    return 0;
}
