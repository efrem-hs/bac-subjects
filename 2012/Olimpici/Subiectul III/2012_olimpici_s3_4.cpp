#include <iostream>
#include <fstream>

using namespace std;

int n,crt,prec,maxim=-1;

ifstream fin("bac.txt");

int main()
{
    fin >> n;
    for (int i = 1; i <= n/2; i++)
    {
        fin >> crt;
        if(i > 1)
            if (crt != prec)
                maxim = prec;
        prec = crt;
    }
    fin >> crt;
    fin.close();
    if (crt != prec)
        maxim = prec;

    if (maxim == -1)
        cout << "Nu exista";
    else
        cout << maxim;
    return 0;
}
