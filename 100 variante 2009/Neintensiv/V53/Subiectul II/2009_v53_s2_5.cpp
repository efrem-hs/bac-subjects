#include <iostream>

using namespace std;

void interschimbare(int a[][21], int n, int x, int y)
{
    for (int j = 1; j <= n; j++)
    {
        int aux = a[x][j];
        a[x][j] = a[y][j];
        a[y][j] = aux;
    }

}

int a[11][21],m,n,x,y;

int main()
{
    cin >> m >> n >> x >> y;

    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> a[i][j];
        }
    }

    interschimbare(a,n,x,y);

    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
            cout << a[i][j] << " ";
        cout << '\n';
    }

    return 0;
}
