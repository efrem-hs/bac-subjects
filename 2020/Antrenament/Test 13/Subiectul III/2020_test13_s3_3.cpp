#include <iostream>
#include <fstream>

using namespace std;

int x;

ofstream fout("bac.txt");

int main()
{
    cin >> x;
    while (x >= 1)
    {
        fout << x << ' ';
        x/=2;
    }

    fout.close();
    return 0;

}
