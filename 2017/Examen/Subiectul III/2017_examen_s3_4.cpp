#include <iostream>
#include <fstream>

using namespace std;

int x, maxlung = 0, lung = 0, nr = 0;

inline void update()
{
    if (lung > maxlung)
    {
        maxlung = lung;
        nr = 1;
    }
    else if (lung == maxlung)
        nr++;
}

int main()
{
    ifstream fin("bac.txt");
    while (fin >> x)
    {
        if (x % 2 == 0)
            lung++;
        else if (lung > 0)
        {
            update();
            lung = 0;

        }
    }
    fin.close();
    if (lung > 0)
        update();
    cout << nr;
    return 0;

}
