#include <iostream>
#include <fstream>

using namespace std;

int v[100], crt, x = -1, y = -1, ok = 0;

ifstream fin("bac.txt");

int main()
{

    while (fin >> crt)
        v[crt] = 1;

    for (int i = 0; i <= 99; i++)
    {
        if (v[i] == 1)
        {
            if (x == -1)
                x = i;
            else
                y = i;
        }

        if (x > -1 && y > -1 && x != y)
        {
            if (y - x >= 2)
            {
                cout << x << ' ' << y << endl;
                ok = 1;
            }
            x = y;
        }
    }

    fin.close();

    if (ok == 0)
        cout << "nu exista";
    return 0;
}
