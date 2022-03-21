#include <iostream>
#include <fstream>

using namespace std;

int x,i=0,pp=0,pn=0,up=0,un=0;

int main()
{
    ifstream fin("bac.in");
    while (fin >> x)
    {
       i++;
       if (x > 0)
       {
            if (pp == 0)
                pp = i;
            up = i;
       }
       else
       {
           if (pn == 0)
            pn = i;
           un = i;
       }
    }
    fin.close();
    if (pp > 0 && pn > 0)
    {
        if (un - pp > up - pn)
            cout << un - pp + 1;
        else
            cout << up - pn + 1;
    }
    else cout << 0;

    return 0;
}
