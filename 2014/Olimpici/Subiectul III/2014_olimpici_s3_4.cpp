#include <iostream>
#include <fstream>

using namespace std;

int crt, prec = -1, lung, lungmax, elmax;

ifstream fin("bac.txt");

int main()
{

    while (fin >> crt)
    {
        if (prec != -1)
            if (crt != prec)
            {
                if (lung >= lungmax)
                {
                    lungmax = lung;
                    elmax = prec;
                }
                lung = 0;
            }
        lung++;
        prec = crt;
    }

    fin.close();

    if (lung >= lungmax)
    {
        lungmax = lung;
        elmax = prec;
    }

    cout << lungmax << endl;
    for (int i = 1; i <= lungmax; i++)
        cout << elmax << ' ';
    return 0;
}
