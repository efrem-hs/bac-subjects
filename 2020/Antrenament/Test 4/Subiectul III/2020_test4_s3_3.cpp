#include <iostream>
#include <fstream>

using namespace std;

int x,pr = -1,nr;

int main()
{
    ifstream fin("bac.txt");
    while (fin >> x)
    {
        if (x != pr)
        {
            if (nr == 2)
                cout << pr << ' ';
            nr = 0;
        }
        nr++;
        pr = x;
    }
    fin.close();
    if (nr == 2)
        cout << pr;
    return 0;
}
