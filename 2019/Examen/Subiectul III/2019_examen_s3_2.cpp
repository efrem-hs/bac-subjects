#include <iostream>

using namespace std;

int a[22][22],m,n,esteSimetrica = 1;
int main()
{
    cin >> m >> n;
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> a[i][j];
            if (j >= (n/2+2))
            {
                if (a[i][j] != a[i][n-j+1])
                    esteSimetrica = 0;
            }
        }
    }

    if (esteSimetrica == 1)
        cout << "DA";
    else
        cout << "NU";
    return 0;
}
