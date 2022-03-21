#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("numere.in");

int n, crt, prec = 0, ok = 0;

int main()
{
    fin >> n;
    while (fin >> crt)
    {
        for (int i = prec + 1; i < crt; i++)
        {
            cout << i << ' ';
            ok = 1;
        }
        prec = crt;
    }

    fin.close();

    for (int i = prec + 1; i <= n; i++)
    {
        cout << i << ' ';
        ok = 1;
    }

    if (ok == 0)
        cout << "Nu exista";

    return 0;
}
