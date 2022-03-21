#include <iostream>
#include <fstream>
#include <climits>

using namespace std;

int x, minim1 = INT_MAX, minim2 = INT_MAX, minim3 = INT_MAX;

ifstream fin("bac.in");

int main()
{
    while(fin >> x)
    {
        if (x % 10 == 0 && x / 10 % 10 == 2)
        {
            if (x < minim1)
            {
                minim3 = minim2;
                minim2 = minim1;
                minim1 = x;
            }
            else if (x < minim2)
            {
                minim3 = minim2;
                minim2 = x;
            }
            else if (x < minim3)
                minim3 = x;
        }
    }
    fin.close();
    if (minim1 < INT_MAX)
        cout << minim1 << ' ';
    if (minim2 < INT_MAX)
        cout << minim2 << ' ';
    if (minim3 < INT_MAX)
        cout << minim3;

    return 0;
}
