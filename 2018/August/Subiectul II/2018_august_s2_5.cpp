#include <iostream>

using namespace std;

int a[100][100],v[100],n;

int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> v[i];
    cout << endl;
    for (int j = 0; j < n; j++)
    {
        if (j % 2 == 0)
        {
            for (int i = 0; i < n; i++)
                a[i][j]=v[n-1-i];
        }
        else
        {
            for (int i = 0; i < n; i++)
                a[i][j] = v[i];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << a[i][j] << ' ';
        cout << endl;
    }
    return 0;
}
