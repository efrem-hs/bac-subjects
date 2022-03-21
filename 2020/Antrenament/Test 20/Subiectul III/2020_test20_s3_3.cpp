#include <iostream>
#include <fstream>

using namespace std;

int crt, prec = -1, smax = 0, s = 0;

int main()
{

    ifstream fin("bac.txt");
    while (fin >> crt)
    {
        if (prec != - 1)
            if (crt % 2 - prec % 2 != 0)
            {
                if (s > smax)
                    smax = s;
                s = 0;
            }
        s += crt;
        prec = crt;
    }
    fin.close();
    if (s > smax)
        smax = s;
    cout << smax;

    return 0;
}
