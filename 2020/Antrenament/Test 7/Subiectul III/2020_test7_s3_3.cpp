#include <iostream>
#include <fstream>

using namespace std;

int x, s = 0, smin = 1001;

int main()
{

    ifstream fin("bac.txt");
    while (fin >> x)
    {
        s+=x;
        if (s < smin)
            smin = s;
        if (s > 0)
            s = 0;
    }
    fin.close();
    cout << smin;
    return 0;

}
