#include <iostream>
#include <fstream>

using namespace std;

int n,x,y,z,r1,r2;

ofstream fout("bac.txt");

int main()
{
    cin >> n >> x >> y >> z;
    r1 = y - x;
    r2 = z - x;
    for (int i = n; i > 3; i--)
    {
        if (i % 2 == 0)
            fout << x + (i/2-1)*r2 + r1 << ' ';
        else
            fout << x + i/2 * r2 << ' ';
    }
    fout << z << ' ' << y << ' ' << x;
    fout.close();

    return 0;
}
