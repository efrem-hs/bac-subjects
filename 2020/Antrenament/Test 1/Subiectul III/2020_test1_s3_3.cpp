#include <iostream>
#include <fstream>

using namespace std;

int x, y;

int main()
{
    cin >> x >> y;
    ofstream fout("bac.txt");
    fout << y << ' ' << x << ' ';
    while (x != 1 || y != 1)
    {
        int f = 3*x-y;
        fout << f << ' ';
        y = x;
        x = f;
    }

    fout.close();

    return 0;
}
