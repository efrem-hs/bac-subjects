#include <iostream>

using namespace std;

int A[26][26],n,a;

int main()
{
    cin >> n >> a;

    for (int i = 1; i <= n; i++)
    {
        int x;
        if (i < a)
                x = 1;
        else if (i == a)
                x = 0;
        else
                x = 2;
        for (int j = 1; j <= n; j++)
        {
            A[i][j] = x;
            cout << A[i][j] << " ";
        }
        cout << '\n';
    }

    return 0;
}
