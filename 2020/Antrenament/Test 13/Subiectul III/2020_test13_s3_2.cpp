#include <iostream>

using namespace std;

int a[401][21],n,k;

int main()
{
    cin >> n >> k;
    for (int j = 1; j <= n; j++)
    {
        int c = j;
        for (int i = 1; i <= n*k; i++)
        {
            a[i][j] = c;
            if (i % k == 0)
                c++;
        }
    }

    for (int i = 1; i <= n*k; i++)
    {
        for (int j = 1; j <= n; j++)
            cout << a[i][j] << ' ';
        cout << endl;
    }
    return 0;

}
