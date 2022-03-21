#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("BAC.TXT");

int x=-1,maxim=-1,lant=0;

int main()
{
    while (fin >> x)
    {
       if (x > maxim)
        {
            if (maxim > -1 && lant == 0)
                cout << maxim << ' ';
            lant = 0;
            maxim = x;
        }
       else if (x == maxim)
           lant = 1;
    }
    if (lant == 0)
        cout << maxim;
    return 0;
}
