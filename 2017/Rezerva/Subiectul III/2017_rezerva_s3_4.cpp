#include <iostream>
#include <fstream>
#include <climits>

using namespace std;

int x,prec = -1,minim = INT_MAX, nr;

ifstream fin("bac.txt");

int main()
{
    while (fin >> x)
    {
        if (prec > -1)
            if (x != prec)
            {
                if (nr % 2 == 1 && prec < minim)
                    minim = prec;
                nr = 0;
            }
        nr++;
        prec = x;
    }
    fin.close();
    if (nr % 2 == 1 && prec < minim)
        minim = prec;
    if (minim == INT_MAX)
        cout << "nu exista";
    else
        cout << minim;
    return 0;
}
