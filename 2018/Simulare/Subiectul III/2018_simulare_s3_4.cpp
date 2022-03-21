#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("bac.txt");

int crt, x, y, maxim, minim;
int main()
{

    fin >> x >> y;
    if (x > y)
    {
        maxim = x;
        minim = y;
    }
    else
    {
        maxim = y;
        minim = x;
    }
    while (fin >> crt)
    {
        if (minim < crt && minim > -1)
        {
            cout << minim << ' ';
            minim = maxim;
            maxim = -1;
            if (minim < crt)
            {
                cout << minim << ' ';
                minim = -1;
            }
        }

        cout << crt << ' ';
    }

    fin.close();

    if (minim != -1)
        cout << minim << ' ';
    if (maxim != -1)
        cout << maxim << ' ';

    return 0;
}
