#include <iostream>
#include <fstream>

using namespace std;

struct
{
    int nrAparitii;
    int pozMax;
}c[10];

int x,i,maxim;

int main()
{

    ifstream fin("bac.in");
    while (fin >> x)
    {
        i++;
        c[x%10].nrAparitii++;
        if (c[x%10].nrAparitii > maxim)
                maxim = c[x%10].nrAparitii;
        c[x%10].pozMax = i;
    }

    fin.close();

    for (int i = 0; i <= 9; i++)
        if (c[i].nrAparitii > 0)
            if (c[i].nrAparitii == maxim)
                cout << c[i].pozMax << ' ';

    return 0;

}
