#include <iostream>
#include <fstream>

using namespace std;

struct secventa
{
    int frecv;
    int lungimeInc;
    int lungimeSf;
}v[10];

int x,i=1,maxim=-1;
ifstream fin("bac.txt");

int main()
{
    while (fin >> x)
    {
        v[x].frecv++;
        if (v[x].frecv == 1)
            v[x].lungimeInc = i;
        else if (v[x].frecv > 1)
        {
            v[x].lungimeSf = i;
            if (v[x].lungimeSf - v[x].lungimeInc + 1 > maxim)
                maxim = v[x].lungimeSf - v[x].lungimeInc + 1;
        }
        i++;
    }

    cout << maxim << endl;

    for (int i = 0; i <= 9; i++)
    {
        if (v[i].lungimeSf - v[i].lungimeInc + 1 == maxim)
            cout << i << ' ';

    }
    return 0;
}
