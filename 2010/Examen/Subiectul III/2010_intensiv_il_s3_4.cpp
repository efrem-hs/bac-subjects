#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("bac.in");

int n, x, maxim1=-1, maxim2=-1, maxim3=-1;

int main()
{
    fin >> n;
    for (int i = 1; i <= n; i++)
    {
        fin >> x;
        if (x % 10 == 5)
        {
            if (x > maxim1)
            {
                maxim3 = maxim2;
                maxim2 = maxim1;
                maxim1 = x;
            }
            else if (x > maxim2 && x < maxim1)
            {
                maxim3 = maxim2;
                maxim2 = x;
            }
            else if (x > maxim3 && x < maxim2)
                maxim3 = x;
        }
    }

    if (maxim3 > -1)
        cout << maxim3 << ' ';
    if (maxim2 > -1)
        cout << maxim2 << ' ';
    if (maxim1 > -1)
        cout << maxim1 << ' ';

    return 0;
}
