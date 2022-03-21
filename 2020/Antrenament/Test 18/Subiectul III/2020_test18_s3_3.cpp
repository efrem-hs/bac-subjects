#include <iostream>
#include <fstream>

using namespace std;

int x,lung,lungmax,nrmax;

int main()
{

    ifstream fin("bac.txt");
    while (fin >> x)
    {
        if (x % 10 == 0)
            lung++;
        else
        {
            if (lung > lungmax)
            {
                lungmax = lung;
                nrmax = 1;
            }
            else if (lungmax > 0 && lung == lungmax)
                nrmax++;
            lung = 0;
        }
    }
    fin.close();

    if (lung > lungmax)
    {
        lungmax = lung;
        nrmax = 1;
    }
    else if (lungmax > 0 && lung == lungmax)
        nrmax++;

    cout << lungmax << ' ' << nrmax;


    return 0;
}
