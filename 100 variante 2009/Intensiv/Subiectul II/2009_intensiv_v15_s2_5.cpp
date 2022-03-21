#include <iostream>

using namespace std;

int main()
{
    int A[7][7], n;
    cin >> n;
    int auxColoana = n;
    for (int i = 1; i<=6; i++)
    {
        int auxLinie = n;
        for (int j = 1; j<=6; j++)
        {
            if (i == j)
                A[i][j] = 0;
            else if (i < j)
                A[i][j] = auxColoana % 10;
            else if (i > j)
            {
                A[i][j] = auxLinie % 10;
                auxLinie/=10;
            }
        }
        auxColoana/=10;
    }

    for (int i = 1 ; i<=6; i++)
    {
        for (int j = 1; j<=6; j++)
            cout << A[i][j] << " ";
        cout << endl;
    }
    return 0;
}
