#include <iostream>
#include <fstream>

using namespace std;

int x,maxim = -1,check = 0;

int main()
{
    ifstream fin("bac.txt");
    while (fin >> x)
    {
        if (x > maxim)
        {
            cout << x << ' ';
            maxim = x;
            check = 1;
        }
        else if (x == maxim && check == 1)
        {
            cout << x << ' ';
        }
        else
            check = 0;
    }
    fin.close();
    return 0;
}
