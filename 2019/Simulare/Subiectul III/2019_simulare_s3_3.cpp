#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("bac.txt");

int n,x,maxPar1, maxImp1, minPar2, minImp2, OK;

int main()
{
    maxPar1 = maxImp1 = -1;
    minPar2 = minImp2 = 1000001;
    fin >> n;
    for (int i = 1; i <= 2*n; i++)
    {
        fin >> x;
        if (i <= n)
        {
            if (x % 2 == 0 && x > maxPar1)
                maxPar1 = x;
            else if (x % 2 == 1 && x > maxImp1)
                maxImp1 = x;
        }
        else
        {
            if (x % 2 == 0 && x < minPar2)
                minPar2 = x;
            else if (x % 2 == 1 && x < minImp2)
                minImp2 = x;
        }
    }
    fin.close();
    if (maxPar1 > -1)
    {
        if (maxPar1 < minImp2 || minImp2 == -1)
            OK++;
        else
            OK--;
    }
    if (maxImp1 > -1)
    {
        if (maxImp1 < minPar2 || minPar2 == -1)
            OK++;
        else
            OK--;
    }

    if (OK > 0)
        cout << "DA";
    else
        cout << "NU";

    return 0;
}
