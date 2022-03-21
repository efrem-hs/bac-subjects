#include <iostream>
#include <fstream>

using namespace std;

struct
{
    int ap,ord;
}cz[9];

int x,nr,czmax,ord;

int main()
{
    ifstream fin("BAC.TXT");
    while (fin >> x)
    {
        nr++;
        cz[x/10%10].ap++;
        cz[x/10%10].ord = nr;
    }
    fin.close();
    for (int i = 0; i <= 9; i++)
        if (cz[i].ap > czmax)
        {
            czmax = cz[i].ap;
            ord = cz[i].ord;
        }
    cout << ord;
    return 0;
}
