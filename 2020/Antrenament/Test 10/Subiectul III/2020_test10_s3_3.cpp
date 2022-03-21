#include <iostream>
#include <fstream>

using namespace std;

int x,y,ok,lung,lungmax,r,rmax;
int main()
{
    ifstream fin("bac.txt");
    fin >> x;
    while (fin >> y)
    {
        if (ok == 1)
        {
            if (y - x == r)
                lung++;
            else
            {
                if (lung > lungmax)
                {
                    lungmax = lung;
                    rmax = r;
                }
                else if (lungmax > 0 && lung == lungmax)
                {
                    if (r > rmax)
                        rmax = r;
                }
                lung = 0;
            }
        }
        r = y - x;
        ok = 1;
        x = y;
    }

    fin.close();

    if (lung > lungmax)
    {
        lungmax = lung;
        rmax = r;
    }
    else if (lungmax > 0 && lung == lungmax)
    {
        if (r > rmax)
            rmax = r;
    }

    if (lungmax == 0)
        cout << "nu exista";
    else
        cout << rmax;

    return 0;

}
