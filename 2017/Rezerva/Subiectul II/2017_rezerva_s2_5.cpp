#include <iostream>

using namespace std;

int a[50][50],m,n;

int main()
{
    cin >> m >> n;
    for (int i = 0 ; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];
    int minim1 = 1001, poz1 = 0, minim2 = 1001, poz2 = 0;
    for (int i = 0; i < m; i++)
        if (a[i][0] < minim1)
        {
            minim1 = a[i][0];
            poz1 = i;
        }
    for (int i = 0; i < m; i++)
        if (a[i][n-1] < minim2)
        {
            minim2 = a[i][n-1];
            poz2 = i;
        }
    int aux = a[poz1][0];
    a[poz1][0] = a[poz2][n-1];
    a[poz2][n-1] = aux;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            cout << a[i][j] << ' ';
        cout << endl;
    }
    return 0;
}
