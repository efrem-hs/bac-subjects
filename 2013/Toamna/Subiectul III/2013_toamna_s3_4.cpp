#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("bac.txt");
int x, crt, c1, c2, ultim = -1;

int main()
{
    fin >> x;
    while (fin >> crt)
    {
        c1 = crt;
        c2 = x;
        while ((c1 % 10) == (c2 % 10) && c2 != 0)
        {
            c1 /= 10;
            c2 /= 10;
        }
        if (c2 == 0)
            ultim = crt;
    }
    fin.close();

    if (ultim == -1)
        cout << "Nu exista";
    else
        cout << ultim;

    return 0;
}
