#include <iostream>
#include <fstream>

using namespace std;

ofstream fout("bac.txt");

int x,y,aux;

int main()
{
    cin >> x >> y;
    while(y >= 0)
    {
        fout << y << ' ';
        aux = y;
        y = x;
        x = x*2+2-aux;
    }

    return 0;
}
