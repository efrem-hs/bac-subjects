#include <iostream>
#include <fstream>

using namespace std;

int x;

ofstream fout("bac.out");

int main()
{
    cin >> x;
    while (x >= 1)
    {
        fout << x << ' ';
        if (x > 10)
        {
            if (x % 2 == 1)
                x = x - 1;
            else
                x = x / 2;
        }
        else
            x = x - 1;
    }
    fout.close();
    return 0;

}
