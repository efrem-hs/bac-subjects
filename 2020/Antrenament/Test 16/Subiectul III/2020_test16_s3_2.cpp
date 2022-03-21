#include <iostream>
using namespace std;

int a[100][100],n,m,k = 1;

int main()
{
    cin >> n >> m;
    for (int i = n-1; i >= 0; i--)
        for (int j = m-1; j >= 0; j--)
        {
            a[i][j] = k * k;
            k+=2;
        }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cout << a[i][j] << ' ';
        cout << endl;
    }
    return 0;
}
