#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("numere.in");

int main()
{
    unsigned nr, precedent = 0;
    fin >> n;
    while (fin >> nr)
    {
        if (nr != precedent)
        {
            n--;
            precedent = nr;
        }
    }

    cout << n;
    return 0;
}
