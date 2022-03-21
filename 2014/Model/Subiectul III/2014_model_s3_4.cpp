#include <iostream>
#include <fstream>

using namespace std;

int precMinim = -1, minim = -1, crt, n;

ifstream fin("bac.txt");

int main()
{
    fin >> n;
    for (int i = 1; i <= n/2; i++)
    {
        fin >> crt;
        if (crt != minim)
        {
            precMinim = minim;
            minim = crt;
        }
    }

    fin >> crt;
    fin.close();
    if (crt == minim)
    {
        if (precMinim > -1)
            cout << precMinim;
        else
            cout << "Nu exista";
    }
    else
        cout << minim;


    return 0;
}
