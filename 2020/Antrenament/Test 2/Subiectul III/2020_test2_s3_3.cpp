#include <iostream>
#include <fstream>

using namespace std;

int x,maxim1,maxim2,maxim3;

int main()
{

    ifstream fin("bac.in");
    while (fin >> x)
    {
        if (x % 10 == 0 && x / 10 % 10 == 2)
        {
            if (x > maxim1)
        {
            maxim3 = maxim2;
            maxim2 = maxim1;
            maxim1 = x;
        }
        else if (x > maxim2)
        {
            maxim3 = maxim2;
            maxim2 = x;
        }
        else if (x > maxim3)
            maxim3 = x;
        }
    }

    if (maxim3 > 0)
        cout << maxim3 << ' ';
    if (maxim2 > 0)
        cout << maxim2 << ' ';
    if (maxim1 > 0)
        cout << maxim1 << ' ';

    return 0;
}
