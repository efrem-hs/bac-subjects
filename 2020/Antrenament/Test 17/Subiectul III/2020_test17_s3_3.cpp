#include <iostream>
#include <fstream>

using namespace std;

struct
{
    int aparitie;
}c[10001];

int n,x,y,nr=0,maxim=-1,minim=10001;
ifstream fin("bac.txt");

int main()
{
    fin >> n;
    for (int i = 1; i <= n; i++)
    {
        fin >> x;
        c[x].aparitie = 1;
        if (x > maxim)
            maxim = x;
        if (x < minim)
            minim = x;
    }
    while (fin >> x >> y)
    {
        if (y < minim || x > maxim)
            nr++;
        else
        {
            int ok = 1;
            for (int i = x; i <= y; i++)
                if (c[i].aparitie == 1)
                {
                    ok = 0;
                    break;
                }
            if (ok == 1)
                nr++;
        }

    }
    fin.close();
    cout << nr;


    return 0;
}
