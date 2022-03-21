#include <iostream>
using namespace std;

int v[101],n,k,nr;
int main()
{
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
        cin >> v[i];
    for (int i = 1; i + k + 1 <= n; i++)
    {
        if (v[i] == v[i+k+1])
            nr++;
    }

    cout << nr;
    return 0;

}
