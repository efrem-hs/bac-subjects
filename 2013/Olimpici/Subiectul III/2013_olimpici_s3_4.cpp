#include <iostream>
#include <fstream>

using namespace std;

int x, v[91], nmin = -1, nmax = -1;

int main()
{
    ifstream fin("bac.txt");
    while (fin >> x)
    {
        if (x >= 10 && x <= 98)
            if (x % 2 == 0)
                v[x] = 1;
    }
    for (int i = 10; i <= 98; i+=2)
        if (v[i] == 0)
        {
            nmin = i;
            break;
        }
    for (int i = 98; i >= 10; i-=2)
        if (v[i] == 0)
        {
            nmax = i;
            break;
        }
    if (nmin > -1 && nmax > -1)
        cout << nmin << ' ' << nmax;
    else
        cout << "Nu exista";
    return 0;
}
