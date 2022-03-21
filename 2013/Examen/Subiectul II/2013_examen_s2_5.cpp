#include <iostream>

using namespace std;

int a[51][51],m,n,ok=0;

int main()
{
    cin >> m >> n;
    for (int i = 1; i <= m; i++)
        for (int j = 1; j <= n; j++)
            cin >> a[i][j];
    for (int j = 1; j <= n; j++)
    {
        int val = a[1][j], esteEgal = 1;
        for (int i = 2; i <= m; i++)
            if (a[i][j] != val)
                esteEgal = 0;
        if (esteEgal == 1)
        {
            cout << val << ' ';
            ok = 1;
        }
    }

    if (ok == 0)
        cout << "Nu exista";
    return 0;
}
