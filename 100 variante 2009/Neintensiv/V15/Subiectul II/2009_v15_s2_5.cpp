#include <iostream>

using namespace std;

int main()
{
    int A[6][6], n;
    cin >> n;
    for (int i = 1; i<=5; i++)
    {
        for (int j = 1; j<=5; j++)
        {
            A[i][j] = n % 10;
        }
        n/=10;
    }

    for (int i = 1 ; i<=5; i++)
    {
        for (int j = 1; j<=5; j++)
            cout << A[i][j] << " ";
        cout << endl;
    }
    return 0;
}
