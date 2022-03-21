#include <iostream>

using namespace std;

int main()
{
    int A[9][9],n;
    cin >> n;
    int aux = n, nr = 0;
    while (aux!=0)
    {
        aux/=10;
        nr++;
    }
    for (int j = 1; j<=nr; j++)
    {
        for (int i = 1; i<=nr; i++)
            A[i][j] = n%10;
        n/=10;
    }

    for (int i = 1; i<=nr; i++)
    {
        for (int j = 1; j<=nr; j++)
            cout << A[i][j] << " ";
        cout << endl;
    }

    return 0;
}
