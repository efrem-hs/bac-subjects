#include <iostream>
#include <fstream>

using namespace std;

int x,y=-1;

int main()
{
    cin >> x;
    ofstream fout("bac.txt");
    while (x >= 1 && y != 0)
    {
        fout << x << ' ';
        if (y > -1)
        {
            fout << y << ' ';
            x = y;
        }
        if (x % 2 == 0)
        {
            x = x - 1;
            y = -1;
        }
        else
        {
            y = (x-1)/2;
            x = y + 1;
        }
    }

    return 0;
}
