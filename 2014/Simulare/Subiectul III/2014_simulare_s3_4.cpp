#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("bac.txt");

int a = - 1,b = -1,c = -1;

int main()
{
    while (fin >> b)
    {
        if (c > -1 || c == -2)
        {
            if (c >= b)
                cout << c << ' ';
            else
            {
                cout << b << ' ';
                c = -2;
                a = -2;

            }

        }
        if (c != -2 && a != - 2)
        {
            c = a;
            a = b;
        }
    }

    fin.close();

    return 0;
}
