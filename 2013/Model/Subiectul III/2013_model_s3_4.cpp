#include <iostream>
#include <fstream>

using namespace std;

int x,ok;

ifstream fin("numere.in");

int main()
{
    while (fin >> x)
    {
        if (x % 3 == 1)
        {
            cout << x << ' ';
            ok = 1;
        }
    }
    fin.close();

    if (ok == 0)
        cout << "Nu exista";

    return 0;
}
