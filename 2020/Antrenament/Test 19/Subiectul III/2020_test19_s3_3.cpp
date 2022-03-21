#include <iostream>
#include <fstream>

using namespace std;

int crt, prec = -1, ok = 0;

ifstream fin("bac.txt");

int main()
{
    while (fin >> crt)
    {
        if (crt != prec)
            if (crt % 2 == 0)
            {
                cout << crt << ' ';
                ok = 1;
            }
        prec = crt;
    }
    fin.close();
    if (ok == 0)
        cout << "nu exista";

    return 0;
}
