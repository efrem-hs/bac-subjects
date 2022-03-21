#include <iostream>

using namespace std;

int a[51][51],n;

int main()
{
    cin >> n;

    int OK = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> a[i][j];
            if (i > j && a[i][j] != 0)
                OK = 0;
        }
    }

    if (OK)
        cout << "Este triunghiulara superior";
    else
        cout << "Nu este triunghiulara superior";


    return 0;
}
