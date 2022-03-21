#include <iostream>
#include <fstream>

using namespace std;

int x,k,lung,lungmax,nr;

int main()
{
    ifstream fin("bac.txt");
    fin >> k;
    while (fin >> x)
    {
        if (x % k == 0)
            lung++;
        else
        {
            if (lung > lungmax)
            {
                lungmax = lung;
                nr = 1;
            }
            else if (lungmax > 0)
                if (lung == lungmax)
                    nr++;
            lung = 0;
        }
    }

    fin.close();

    if (lung > lungmax)
    {
        lungmax = lung;
        nr = 1;
    }
    else if (lungmax > 0)
        if (lung == lungmax)
            nr++;


    cout << lungmax << ' ' << nr;
    return 0;

}
