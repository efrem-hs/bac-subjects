#include <iostream>
#include <fstream>

using namespace std;

int x,n, maxim = -1, aparitie = 0;

int main()
{

    ifstream fin("bac.txt");
    fin >> n;
    for (int i = 1; i <= n; i++)
    {
        fin >> x;
        if (x > maxim)
        {
            maxim = x;
            aparitie = 0;
        }
        if (x == maxim)
            aparitie++;
    }
    fin.close();
    if (aparitie <= n/2)
        cout << "DA";
    else
        cout << "NU";
    return 0;
}
