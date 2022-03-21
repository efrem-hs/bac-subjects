#include <iostream>
#include <fstream>

using namespace std;

int x,y,z,l,maxim;

ifstream fin("bac.txt");

int main()
{
    fin >> x >> y;
    while (fin >> z)
    {
        if (x != y && x != z && y != z)
        {
            l++;
            if (l > maxim)
                maxim = l;
        }
        else
            l = 0;
        x = y;
        y = z;
    }

    cout << 3 + (maxim-1);

    return 0;
}
