#include <iostream>
#include <fstream>

using namespace std;

int x, prec = -1, nr;

int main()
{
    ifstream fin("bac.txt");
    while (fin >> x)
    {
        if (prec > -1)
            if (x != prec)
            {
                cout << prec << ' ' << nr << ' ';
                nr = 0;
            }
        nr++;
        prec = x;
    }
    fin.close();
    cout << prec << ' ' << nr;

    return 0;

}
